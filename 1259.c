/*beeid: 639422
PROBLEMA:
1259 - Pares e Ímpares
RESPOSTA:
Accepted
LINGUAGEM:
C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
TEMPO:
0.036s
TAMANHO:
1,13 KB
MEMÓRIA:
-
SUBMISSÃO:
26/03/2023 15:00:31
*/


#include <stdio.h>

void quickSort(int x[], int dr, int ri);

int main() {
    int n, i, x;
    int even[100001], odd[100001];
    int e_idx = 0, o_idx = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            even[e_idx++] = x;
        } else {
            odd[o_idx++] = x;
        }
    }

    quickSort(even, 0, e_idx - 1);
    quickSort(odd, 0, o_idx - 1);

    for (i = 0; i < e_idx; i++) {
        printf("%d\n", even[i]);
    }

    for (i = o_idx - 1; i >= 0; i--) {
        printf("%d\n", odd[i]);
    }

    return 0;
}

void quickSort(int x[], int dr, int ri) {
    int i = dr, j = ri;
    int tmp;
    int pivot = x[(dr + ri) / 2];

    while (i <= j) {
        while (x[i] < pivot) {
            i++;
        }
        while (x[j] > pivot) {
            j--;
        }
        if (i <= j) {
            tmp = x[i];
            x[i] = x[j];
            x[j] = tmp;
            i++;
            j--;
        }
    }

    if (dr < j) {
        quickSort(x, dr, j);
    }
    if (i < ri) {
        quickSort(x, i, ri);
    }
}