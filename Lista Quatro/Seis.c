/*******
Desenvolva um algoritmo que leia os 5 elementos de um vetor A
e transfira-os para o vetor B.
*******/

#include<stdio.h>

int main() {
	int vet_a[5], vet_b[5];
	
	printf("Informe os elementos do vetor A\n");
	
	for (int i=0; i < 5; i++){
		printf("A[%d]: ", i+1);
		scanf("%d", &vet_a[i]);
	}
	
	for (int i=0; i < 5; i++)
		vet_b[i] = vet_a[i];
	
	printf("\nVetor A");	
	for (int i=0; i < 5; i++)
		printf("\nA[%d]: %d", i+1, vet_a[i]);

	printf("\nVetor B");	
	for (int i=0; i < 5; i++)
		printf("\nA[%d]: %d", i+1, vet_a[i]);	
	
	return 0;
}