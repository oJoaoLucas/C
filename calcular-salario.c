#include <stdio.h>

int main() {

    int func;
    float horas, grana, salario;

    printf("Qual o número do funcionario: ");
    scanf("%d", &func);

    printf("Quantas horas ele trabalhou: ");
    scanf("%f", &horas);
    printf("Quanto ele recebeu: ");
    scanf("%f", &grana);

    salario = horas * grana;

    printf("Funcionario numero: %.d\n", func);
    printf(" salario = U$ %.2f\n", salario);
 

    return 0;
}