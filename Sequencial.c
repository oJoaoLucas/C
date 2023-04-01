#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 100

struct Aluno {
    int ra;
    float nota_a1;
    float nota_a2;
};

void ler_alunos(struct Aluno alunos[], int *qtd_alunos) {
    FILE *arquivo = fopen("A05ordenadoRA.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    *qtd_alunos = 0;
    while (fscanf(arquivo, "%d %f %f", &alunos[*qtd_alunos].ra, &alunos[*qtd_alunos].nota_a1, &alunos[*qtd_alunos].nota_a2) != EOF) {
        (*qtd_alunos)++;
    }

    fclose(arquivo);
}

int buscar_aluno(struct Aluno alunos[], int qtd_alunos, int ra) {
    int inicio = 0;
    int fim = qtd_alunos - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (alunos[meio].ra == ra) {
            return meio;
        } else if (alunos[meio].ra < ra) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

float calcular_nota_final(float nota_a1, float nota_a2) {
    return (nota_a1 + nota_a2) / 2;
}

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    int qtd_alunos;
    int ra_busca;

    ler_alunos(alunos, &qtd_alunos);

    printf("Informe o RA do aluno a ser buscado: ");
    scanf("%d", &ra_busca);

    int indice_aluno = buscar_aluno(alunos, qtd_alunos, ra_busca);

    if (indice_aluno == -1) {
        printf("Aluno nao encontrado.\n");
    } else {
        float nota_final = calcular_nota_final(alunos[indice_aluno].nota_a1, alunos[indice_aluno].nota_a2);
        printf("RA: %d\nNota A1: %.2f\nNota A2: %.2f\nNota final: %.2f\n", alunos[indice_aluno].ra, alunos[indice_aluno].nota_a1, alunos[indice_aluno].nota_a2, nota_final);
    }

    return 0;
}