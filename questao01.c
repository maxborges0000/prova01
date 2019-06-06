#include <stdlib.h>
#include <stdio.h>

void main(){

int soma, i, max;

	printf("Digite o numero maximo: ");
	scanf("%d%*c", &max);
	
	soma = 0;
	for (i=0; i<=20; i+=2)
		soma += i;
	
	printf("A soma de todos os números pares ate' %d e': %d\n", max, soma);
	
}
