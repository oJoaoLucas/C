#include <stdio.h>

int main(){
    int ano1, ano2;
    float aod1, afo1, aod2, afo2, it1, it2, diferenca;

    printf("Insira o ano do investimento: ");
    scanf("%d", &ano1);
    printf("Insira o investimento AOD do ano de %d: ", ano1);
    scanf("%f", &aod1);
    printf("Insira o investimento AFO do ano de %d: ", ano1);
    scanf("%f", &afo1);
    printf("Insira outro ano de investimento: ");
    scanf("%d", &ano2);
    printf("Insira o investimento AOD do ano de %d: ", ano2);
    scanf("%f", &aod2);
    printf("Insira o investimento AFO do ano de %d: ", ano2);
    scanf("%f", &afo2);

    it1 = aod1 + afo1;
    it2 = aod2 + afo2;

    if (it1 >= it2)
    {
        printf("A diferença entre os anos é de: %f", diferenca = it1 - it2);
    }
    else
    {
        printf("A diferença entre os anos é de: %.2f", diferenca = it2 - it1);
    }

    return 0;
}