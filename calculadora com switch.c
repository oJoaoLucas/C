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

  switch (op) {

    case 1:
      printf("\n Digite o primeiro numero:");
      scanf ("%f",&num1);
      printf("\n Digite o segundo numero:");
      scanf ("%f",&num2);
      resultado= num1 + num2;    
      printf ("O resultado e: %.2f\n\n",resultado);
      break; 
    case 2:
      printf("\n Digite o primeiro numero:");
      scanf ("%f",&num1);
      printf("\n Digite o segundo numero:");
      scanf ("%f",&num2);
      resultado= num1 - num2;    
      printf ("O resultado e: %.2f\n\n",resultado);
      break; 
    case 3:
      printf("\n Digite o primeiro numero:");
      scanf ("%f",&num1);
      printf("\n Digite o segundo numero:");
      scanf ("%f",&num2);
      resultado= num1 * num2;    
      printf ("O resultado e: %.2f\n\n",resultado);
      break; 
    case 4:
      printf("\n Digite o primeiro numero:");
      scanf ("%f",&num1);
      printf("\n Digite o segundo numero:");
      scanf ("%f",&num2);
      resultado= num1 / num2;    
      printf ("O resultado e: %.2f\n\n",resultado);
      break; 
    default:
      printf("Operador invalido");

  }
      
      
      
      



  

  return 0;

}