#include <stdio.h>

int main() {

    int prod1, qnt1, prod2, qnt2;
    float val1, val2, total;

    printf("Código da primeira peça: ");
    scanf("%d", &prod1);
    printf("Quantidade das primeiras peças: ");
    scanf("%d", &qnt1);
    printf("Valor unitário das primeiras peças: ");
    scanf("%f", &val1);
    printf("Código da segunda peça: ");
    scanf("%d", &prod2);
    printf("Quantidade das segundas peças: ");
    scanf("%d", &qnt2);
    printf("Valor unitário das segundas peças: ");
    scanf("%f", &val2);
    total = qnt1*val1+qnt2*val2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}