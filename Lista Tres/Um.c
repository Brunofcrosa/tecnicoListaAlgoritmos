/***********************
Faça um algoritmo em C que lê 10 números e ao final apresente quantos são maiores que
100.
************************/

#include<stdio.h>

int main () {
	int i, numero, quant = 0;
	
	for (i=0; i < 10; i++){
		printf("Informe o numero: ");
		scanf("%d", &numero);
		
		if (numero > 100)
			quant ++;
	}
	
	printf("\nQuantidade de valores maiores que 100: %d", quant);
	
	return 0;
}