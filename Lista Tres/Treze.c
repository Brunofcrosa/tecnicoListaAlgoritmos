/***********************
Fazer um algoritmo que leia diversos números e mostre
quantas vezes o número 10 foi digitado. O valor 0 (zero)
é o código de fim de entrada.

************************/

#include<stdio.h>

int main () {
	int numero, cont=0;
		
	do {
		printf("Informe um numero: ");
		scanf("%d", &numero);
		
		if (numero == 10)
			cont++;
	} while (numero != 0);
	
	printf("\nO numero 10 foi digitado %d vezes", cont);
	
	return 0;
}