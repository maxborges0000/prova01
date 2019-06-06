#include <stdio.h>

int main()
{
	int saque = 0;

	do
	{
		printf("\n\n\tEntre com valor para saque: ");
		scanf("%d",&saque);

		if (saque <= 0) printf("\n\tVoce nao pode sacar um valor negativo ou 0");
		else if (saque % 5 == 0) break;
		else printf("\n\tVoce nao pode sacar %d: ",saque);
	} while (0 == 0);

	printf("\n\tVoce sacou %d: ",saque);
	
	printf("\n\t%d notas de 100",saque / 100);
	saque = saque % 100;

	printf("\n\t%d notas de 50",saque / 50);
	saque = saque % 50;
	printf("\n\t%d notas de 20",saque / 20);
	saque = saque % 20;
	printf("\n\t%d notas de 10",saque / 10);
	saque = saque % 10;
	printf("\n\t%d notas de 5\n",saque / 5);
	saque = saque % 5;

return 0;
	
}
