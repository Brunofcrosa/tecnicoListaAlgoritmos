/*********
Escrever um programa que leia 5 números reais e imprima-os na ordem inversa.
***********/

#include<stdio.h>

int main() {
	float vet_a[5];
	int i;
	
	printf("Informe os elementos do vetor A\n");
	
	for (i=0; i < 5; i++) {
		printf("A[%d]: ", i);
		scanf("%f", &vet_a[i]);
	}
	
	printf("\nElementos do vetor na ordem inversa B\n");
	
	for (i=4; i >= 0; i--) 
		printf("A[%d]: %.2f\n", i, vet_a[i]);
	
	return 0;
}