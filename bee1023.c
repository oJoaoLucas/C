// 725239 - 111996 - Edilson Junior
// 642261 - 114069 - Guilherme Fusco Bertogna
// 639854 - 113629 - Isaac Paes Rasxid
// 639422 - 113059 - João Lucas Lima
// 646215 - 113661 - Nicolas Villela Da Silva
// 640624 - 110558 - Rafael Richard Ribeiro



#include <stdio.h>

int main()
{
int num_casas, consumo, tamanho, i, cidade = 1, soma_consumo, soma_tamanho, j;
int total1, total2, diferenca;

while(scanf("%d", &num_casas) != 0){
    soma_consumo = 0, soma_tamanho = 0;
    int habitantes[210] = {0};

    if(num_casas == 0){
        break;
    }
    for(i = 0; i < num_casas; i++){
        scanf("%d %d", &consumo, &tamanho);

        soma_consumo = soma_consumo + consumo;
        soma_tamanho = soma_tamanho + tamanho;

        habitantes[tamanho/consumo] += consumo;
    }

    printf("Cidade# %d:\n", cidade);
    cidade++;
    j = 0;

    for(i = 0; i < 210; i++){
        if(habitantes[i] > 0){
            if (j > 0){
                printf(" ");
            }
            j++;
            printf("%d-%d", habitantes[i], i);
        }
    }
    printf("\n");

    total1 = (double)soma_tamanho / (double)soma_consumo * 100;
    total2 = (double)soma_tamanho / (double)soma_consumo;
    total2 = total2 * 100;
    diferenca = total1 - total2;
    total1 = total1 / 100;

    printf("Consumo medio: %d.%02d m3.\n", total1, diferenca);
}

return 0;
}