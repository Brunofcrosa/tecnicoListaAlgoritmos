/*********
Criar um programa que leia os 5 valores de um vetor do tipo inteiro e, então , 
construir um segundo vetor de mesma dimensão, sendo que cada elemento do 
segundo vetor é  o somatório do valor 1 até o valor do elemento correspondente
no primeiro vetor. Ex.: Vet_A[0] = 5; logo, Vet_B[0] = 15 (1 + 2 + 3 + 4 + 5 = 15).
Apresentar como resultado o segundo vetor.
***********/

#include<stdio.h>

int main() {
	int vet_a[5], vet_b[5], i, j, soma;
	
	printf("Informe os elementos do vetor A\n");
	
	for (i=0; i < 5; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &vet_a[i]);
		soma = 0;
		for (j=1; j <= vet_a[i]; j++)
			soma += j;
		vet_b[i] = soma;
	}
	
	printf("\nVetor resultante B\n");
	
	for (i=0; i < 5; i++) 
		printf("B[%d]: %d\n", i, vet_b[i]);
	
	return 0;
}