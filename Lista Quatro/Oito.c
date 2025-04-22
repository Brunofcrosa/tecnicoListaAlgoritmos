/*******
Faça um programa em C para ler um vetor de 30 números.
Após isto, ler mais um número qualquer, calcular e escrever
quantas vezes esse número aparece no vetor.
*******/

#include<stdio.h>

int main() {
	int vet[30], numero, cont=0;
	
	printf("Informe os elementos do vetor\n");
	
	for (int i=0; i < 30; i++){
		printf("Elemento[%d]: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	for (int i=1; i < 30; i++)
		if (vet[i] == numero)
			cont++;
		
	printf("\nO numero %d aparece %d vezes no vetor", numero, cont);	
	
	return 0;
}