/*********
Desenvolver um algoritmo que leia dois vetores, sendo a primeiro com 5 elementos e
o segundo com 8 elementos. Construir um terceiro vetor que armazene a junção  dos
dois primeiros vetores e mostre os valores na tela. Assim, o terceiro vetor deve
ter 13 posições.
***********/

#include<stdio.h>

int main() {
	int vet_a[5], vet_b[8], vet_c[13], i;
	
	printf("Informe os elementos do vetor A\n");
	
	for (i=0; i < 5; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &vet_a[i]);
		vet_c[i] = vet_a[i];
	}
	
	printf("\nInforme os elementos do vetor B\n");
	
	for (i=0; i < 8; i++) {
		printf("B[%d]: ", i);
		scanf("%d", &vet_b[i]);
		vet_c[i+5] = vet_b[i];
	}
	
	printf("\nVetor resultante\n");
	
	for (i=0; i < 13; i++) 
		printf("C[%d]: %d\n", i, vet_c[i]);
					
	return 0;
}