#include <stdio.h>

int main ()
{

	int n, m;

	scanf("%d %d", &n, &m);

	if(m - n >= 3)
		printf("Muito bem! Apresenta antes do Natal!\n");
	else if (m - n < 0)
		printf("Eu odeio a professora!\n");
	else if (m - n < 3)
	{

		printf("Parece o trabalho do meu filho!\n");
		m += 2;
		if (m <= 24)
			printf("TCC Apresentado!\n");
		else
			printf("Fail! Entao eh nataaaaal!\n");

	}

}