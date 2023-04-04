// 725239 - 111996 - Edilson Junior
// 642261 - 114069 - Guilherme Fusco Bertogna
// 639854 - 113629 - Isaac Paes Rasxid
// 639422 - 113059 - João Lucas Lima
// 646215 - 113661 - Nicolas Villela Da Silva
// 640624 - 110558 - Rafael Richard Ribeiro



#include <stdio.h>
#include <stdlib.h>

#define MAX_PRESENTES 100005

typedef struct {
    int id, altura, largura, comprimento;
} Presente;

int comparar_presentes(const void* a, const void* b) {
    const Presente* presente_a = (const Presente*) a;
    const Presente* presente_b = (const Presente*) b;
    int volume_a = presente_a->altura * presente_a->largura * presente_a->comprimento;
    int volume_b = presente_b->altura * presente_b->largura * presente_b->comprimento;
    if (volume_a != volume_b) {
        return volume_b - volume_a;
    }
    return presente_a->id - presente_b->id;
}

int comparar_ids(const void* a, const void* b) {
    const Presente* presente_a = (const Presente*) a;
    const Presente* presente_b = (const Presente*) b;
    return presente_a->id - presente_b->id;
}

int main() {
    int num_casos_teste;
    scanf("%d", &num_casos_teste);
    while (num_casos_teste--) {
        int num_presentes, num_selecionados;
        scanf("%d%d", &num_presentes, &num_selecionados);
        Presente presentes[MAX_PRESENTES];
        for (int i = 0; i < num_presentes; ++i) {
            scanf("%d%d%d%d", &presentes[i].id, &presentes[i].altura, &presentes[i].largura, &presentes[i].comprimento);
        }
        qsort(presentes, num_presentes, sizeof(Presente), comparar_presentes);
        qsort(presentes, num_selecionados, sizeof(Presente), comparar_ids);
        for (int i = 0; i < num_selecionados; ++i) {
            printf("%d%c", presentes[i].id, i + 1 == num_selecionados ? '\n' : ' ');
        }
    }
    return 0;
}
