// 725239 - 111996 - Edilson Junior
// 642261 - 114069 - Guilherme Fusco Bertogna
// 639854 - 113629 - Isaac Paes Rasxid
// 639422 - 113059 - João Lucas Lima
// 646215 - 113661 - Nicolas Villela Da Silva
// 640624 - 110558 - Rafael Richard Ribeiro



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME_LEN 20

typedef struct {
    char nome[MAX_NOME_LEN + 1];
    int num;
} Aluno;

int compara_nomes(const void *a, const void *b) {
    Aluno *aluno_a = (Aluno*) a;
    Aluno *aluno_b = (Aluno*) b;
    return strcmp(aluno_a->nome, aluno_b->nome);
}

int main() {
    int n, k;
    Aluno alunos[MAX_ALUNOS];
    int i;

    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) {
        scanf("%s", alunos[i].nome);
        alunos[i].num = i + 1; 
    }

    qsort(alunos, n, sizeof(Aluno), compara_nomes);
    printf("%s\n", alunos[k - 1].nome);

    return 0;
}
