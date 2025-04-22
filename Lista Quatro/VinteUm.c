/*********
Crie um vetor de 100 elementos onde cada dado é a letra ‘P’ ou ‘I’,
dependendo da sua posição ser par ou ímpar. Feito isso, apresente o
resultado na tela.
***********/

#include<stdio.h>

int main() {
	char vetor[100];
	int i;
	
	printf("Elementos do vetor\n\n");
	for (i=0; i < 100; i++){ 
		if (i % 2 == 0)
			vetor[i] = 'P';
		else vetor[i] = 'I';
		printf("Vetor[%d]: %c\n", i, vetor[i]);
	}
	
	return 0;
}