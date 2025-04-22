/*********
Elaborar um programa que efetue o calculo de uma tabuada (1 ao 10) de um numero
qualquer e armazene os resultados em um vetor, apresentando o resultados
na tela.
***********/

#include<stdio.h>

int main() {
	int vet_a[10], i, numero;
	
	printf("Informe o numero para calcular a tabuada: ");
	scanf("%d", &numero);
	
	for (i=0; i < 10; i++)
		vet_a[i] = (i+1)* numero;
	
	printf("\nTabuda do %d\n", numero);
	
	for (i=0; i < 10; i++)
		printf("%d x %d = %d\n", i+1, numero, vet_a[i]);

	return 0;
}