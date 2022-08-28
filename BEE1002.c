
#include <stdio.h>
 
int main() {
  double raio, area, n;
  printf("Digite o valor do raio: ");
  scanf("%lf", &raio);
  n=3.14159;  
  area = n * (raio * raio);
  printf("A = %.4f\n", area);
  return 0;
}