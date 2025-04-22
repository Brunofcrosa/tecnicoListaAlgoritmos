/*********
Construa um algoritmo que leia um vetor A de 15 elementos.
Construir um vetor B de mesmo tipo, sendo que cada elemento
do vetor B deverá  ser o resultado do fatorial correspondente
de cada elemento de A. Apresentar os 2 vetores no final do algoritmo.
***********/

#include<stdio.h>

int main() {
	int vet_a[15], vet_b[15], fat, i;
	
	printf("Informe os elementos do vetor A\n");
	
	for (i=0; i < 15; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &vet_a[i]);
		fat = 1;
		for (int j=vet_a[i]; j > 1; j--)
			fat *= j;
		vet_b[i] = fat;
	}
	
	printf("Vetor dos elementos\n");
	
	for (i=0; i < 15; i++) 
		printf("A[%d]: %d\n", i, vet_a[i]);
		
	printf("Vetor dos fatoriais\n");
	
	for (i=0; i < 15; i++) 
		printf("B[%d]: %d\n", i, vet_b[i]);
					
	return 0;
}