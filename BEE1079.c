#include <stdio.h>

int main(){
	int num,i; 
	double n1, n2, n3, ponderada;
	
	scanf("%d", &num);
	for (i=0; i<num; i++){
		scanf("%lf %lf %lf", &n1, &n2, &n3);
		ponderada = (n1*2 + n2*3 + n3*5)/10;
		printf("%.1lf\n", ponderada);
	}
    
return 0;
}