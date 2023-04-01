#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 100

typedef struct {
    int ra;
    float nota_a1;
    float nota_a2;
} Aluno;

Aluno alunos[MAX_ALUNOS];
int num_alunos = 0;

void ler_dados_arquivo(FILE *arquivo) {
    while (!feof(arquivo) && num_alunos < MAX_ALUNOS) {
        fscanf(arquivo, "%d%f%f", &alunos[num_alunos].ra, &alunos[num_alunos].nota_a1, &alunos[num_alunos].nota_a2);
        num_alunos++;
    }
}

void buscar_aluno(int ra) {
    int i;
    for (i = 0; i < num_alunos; i++) {
        if (alunos[i].ra == ra) {
            float nota_final = (alunos[i].nota_a1 + alunos[i].nota_a2) / 2.0;
            printf("RA: %d\nNota A1: %.2f\nNota A2: %.2f\nNota Final: %.2f\n", alunos[i].ra, alunos[i].nota_a1, alunos[i].nota_a2, nota_final);
            return;
        }
    }
    printf("Aluno com RA %d nao encontrado.\n", ra);
}

int main() {
    FILE *arquivo;
    int ra;

    arquivo = fopen("A05ordenadoRA.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    ler_dados_arquivo(arquivo);
    fclose(arquivo);

    printf("Digite o RA do aluno: ");
    scanf("%d", &ra);

    buscar_aluno(ra);

    return 0;
}
