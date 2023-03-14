#include <stdio.h>

int main() {
int num_casos, tam_trem, trocas;
scanf("%d", &num_casos);
while (num_casos--) {
scanf("%d", &tam_trem);
int trem[tam_trem];
for (int i = 0; i < tam_trem; i++) {
scanf("%d", &trem[i]);
}
trocas = 0;
for (int i = 0; i < tam_trem-1; i++) {
for (int j = 0; j < tam_trem-i-1; j++) {
if (trem[j] > trem[j+1]) {
int temp = trem[j];
trem[j] = trem[j+1];
trem[j+1] = temp;
trocas++;
}
}
}
printf("Optimal train swapping takes %d swaps.\n", trocas);
}
return 0;
}





