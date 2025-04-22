/***********************
Ler diversos números e mostrar quantos deles são ímpares.
O valor -999 é o código para fim de entrada. 
************************/

#include<stdio.h>

int main () {
	int numero;
	
	do {
		printf("\nInforme um numero: ");
		scanf("%d", &numero);
		if (numero % 2 != 0)
			printf("O numero %d eh impar", numero);
	} while (numero != -999);
					
	return 0;
}