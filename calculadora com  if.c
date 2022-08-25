#include <stdio.h>

int main(){
    int op;
    float num1, num2, resultado;

    printf("Operacoes disponiveis:\n");
    printf("'1' : soma\n");
    printf("'2' : subtracao\n");
    printf("'3' : multiplicao\n");
    printf("'4' : divisao\n");

    printf("\n Digite o operador:");
    scanf ("%d",&op);

    if (op==1){
    printf("\n Digite o primeiro numero:");
    scanf ("%f",&num1);
    printf("\n Digite o segundo numero:");
    scanf ("%f",&num2);
    resultado= num1 + num2;    
    printf ("O resultado e: %.2f\n\n",resultado); 

    }  

    else
     if (op==2) {
    printf("\n Digite o primeiro numero:");
    scanf ("%f",&num1);
    printf("\n Digite o segundo numero:");
    scanf ("%f",&num2);
    resultado=num1-num2; 
    printf ("O resultado e: %.2f\n\n",resultado);    

    }

    else
    if (op==3) {
    printf("\n Digite o primeiro numero:");
    scanf ("%f",&num1);
    printf("\n Digite o segundo numero:");
    scanf ("%f",&num2);
    resultado=num1*num2;  
    printf ("O resultado e: %.2f\n\n",resultado);   

    }

    else
    if (op==4) {
    printf("\n Digite o primeiro numero:");
    scanf ("%f",&num1);
    printf("\n Digite o segundo numero:");
    scanf ("%f",&num2);
    resultado=num1/num2;    
    printf ("O resultado e: %.2f\n\n",resultado); 

    }

  else
  printf("Operador invalido!");

  return 0;

}