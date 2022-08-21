#include <stdio.h>

int main() {

    int distanc;
    float comb, kml;

    printf("Qual a distancia percorrida: ");
    scanf("%d", &distanc);

    printf("Qual o total de combustivel gasto: ");
    scanf("%f", &comb);

    kml = distanc / comb;

    printf(" KM/L = %.f\n", kml);
 

    return 0;
}