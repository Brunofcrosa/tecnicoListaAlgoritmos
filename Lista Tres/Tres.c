/***********************
Fazer um programa em C que escreve na tela do computador os valores pares de 1 até 25.
************************/

#include<stdio.h>

int main () {
	int i;
		
	for (i=1; i <= 25; i++)		
		if ( i%2 == 0)
			printf("%d eh par\n", i);
		
	return 0;
}