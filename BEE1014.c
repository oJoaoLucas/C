#include <stdio.h>

int main() {

    int distanc;
    float comb, kml;

    printf("Qual a distancia percorrida: ");
    scanf("%d", &distanc);

    printf("Qual o total de combustivel gasto: ");
    scanf("%f", &comb);


    printf("%.3f km/l\n",(distanc/comb));
 

    return 0;
}