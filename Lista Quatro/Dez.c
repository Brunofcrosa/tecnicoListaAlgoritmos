/*********
Elaborar um programa que leia 8 valores dos vetores A e B.
O Vetor A deve aceitar apenas a entrada de valores que sejam divisíveis por 2 e 3,
enquanto o vetor B deve aceitar apenas valores múltiplos de 5.
Esta validação não deve ser feita pelo usuário, mas sim pelo programa.
Feito isso, crie um terceiro vetor que armazene todos os elementos dos dois vetores 
(16 posições) e apresente esses valores na tela.
***********/

#include<stdio.h>

int main() {
	int valor, vet_a[8], vet_b[8], vet_c[16], i;
	
	printf("Informe os elementos do vetor A\n");
	
	for (i=0; i < 8; i++){
		do {
			printf("A[%d]: ", i);
			scanf("%d", &valor);
			if (valor % 2 == 0 || valor % 3 == 0)
				vet_a[i] = valor;
			else printf("\nEsse valor eh invalido!\n");
		} while (valor % 2 != 0 && valor % 3 != 0);
	}
	
	printf("Informe os elementos do vetor B\n");
	
	for (i=0; i < 8; i++){
		do {
			printf("B[%d]: ", i);
			scanf("%d", &valor);
			if (valor % 5 == 0)
				vet_b[i] = valor;
			else printf("\nEsse valor eh invalido!\n");
		} while (valor % 5 != 0);
	}
	
	for (i=0; i < 8; i++){
		vet_c[i] = vet_a[i];
		vet_c[i+8] = vet_b[i];
	}
	
	printf("\nNovo vetor\n");
	
	for (i=0; i < 16; i++)
		printf("C[%d]: %d\n", i, vet_c[i]);
					
	return 0;
}