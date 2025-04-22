/*********
Desenvolver um programa que armazene 15 números inteiros em um vetor e
mostre o total de números digitados maiores que 5.


***********/

#include<stdio.h>

int main() {
	int vet_a[15], i, cont=0;
	
	printf("Informe os elementos do vetor A\n");
	
	for (i=0; i < 15; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &vet_a[i]);
		if (vet_a[i] > 5)
			cont++;
	}
	
	printf("\nForam digitados %d valores maiores que 5\n", cont);

	return 0;
}