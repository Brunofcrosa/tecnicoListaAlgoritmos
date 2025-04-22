/***********************
Desenvolver um programa que apresente todos os números 
inteiros divisíveis por 4 que sejam menores que 200 e
maiores que 0. 

************************/

#include<stdio.h>

int main () {
	int i;
	
	printf("\nNumeros menores que 200 e maiores que 0 divisiveis por 4\n");
		
	for (i=199; i > 0; i--)
		if (i % 4 == 0)
			printf("%d\n", i);
		
	return 0;
}