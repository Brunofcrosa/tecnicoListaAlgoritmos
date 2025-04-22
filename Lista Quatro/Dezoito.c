/*********
Elaborar um programa que leia um vetor X de 6 elementos do tipo real.
Construir um vetor Y de mesmo tipo e dimensão. Os valores armazenados
em Y devem seguir a regra: cada posição de índice ímpar do vetor Y
deve armazenar um valor de índice par existente no vetor X e cada posição
de índice par no vetor Y deve armazenar um valor de índice ímpar do vetor X.
Todos os valores de X devem constar em Y. Apresentar os 2 vetores.
***********/

#include<stdio.h>

int main() {
	float vet_x[6], vet_y[6];
	int i;
	
	printf("Informe os elementos do vetor X\n");
	for (i=0; i < 6; i++){ 
		printf("X[%d]: ", i);
		scanf("%f", &vet_x[i]);
	}
	
	for (i=0; i < 6; i++)
		if (i%2 == 0)
			vet_y[i] = vet_x[i+1];
		else vet_y[i] = vet_x[i-1];
	
	printf ("\nVetor X\n");
	for (i=0; i < 6; i++)
		printf("X[%d]: %.2f\n", i, vet_x[i]);
		
	printf ("\nVetor Y\n");
	for (i=0; i < 6; i++)
		printf("Y[%d]: %.2f\n", i, vet_y[i]);

	return 0;
}