/*******
Crie um programa que leia 15 elementos de um vetor A.
Construir um vetor B de mesmo tipo, observando a seguinte lei de formação:
Todo elemento de B deve ser o quadrado do elemento de A correspondente. Apresentar os 2 vetores.
********/

#include<stdio.h>

int main() {
	int vet_a[15], vet_b[15];
	
	printf("Informe os elementos do vetor\n");
	
	for (int i=0; i < 15; i++){
		printf("A[%d]: ", i+1);
		scanf("%d", &vet_a[i]);
		vet_b[i] = vet_a[i] * vet_a[i];
	}
	
	printf("\nVetor A");
	
	for (int i=0; i < 15; i++)
		printf("\nA[%d]: %d", i+1, vet_a[i]);
		
	printf("\nVetor B");
	
	for (int i=0; i < 15; i++)
		printf("\nB[%d]: %d", i+1, vet_b[i]);
	
	return 0;
}