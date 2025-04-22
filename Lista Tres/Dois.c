/***********************
Faça um algoritmo em C que lê 15 valores inteiros, encontra o maior e o menor deles e
mostra o resultado.
************************/

#include<stdio.h>

int main () {
	int i, numero, menor, maior;
	
	printf("Informe o numero: ");
	scanf("%d", &numero);
	
	menor = numero;
	maior = numero;
	
	for (i=0; i < 14; i++){
		printf("Informe o numero: ");
		scanf("%d", &numero);
		
		if (numero < menor)
			menor = numero;
		
		if (numero > maior)
			maior = numero;
	}
	
	printf("\nMenor valor: %d", menor);
	printf("\nMaior valor: %d", maior);
	
	return 0;
}