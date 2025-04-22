/*********
Faça  um algoritmo para criar um vetor de 20 valores reais.
As primeiras 10 posições são valores informados pelo usuário, as últimas
10 posições deverão ter valores que obedecem a regra.
Os valores de posições ímpares da primeira metade deverão ser acrescidos de 5%
na segunda metade. E, os valores pares da primeira metade deverão ser acrescidos
de 2% na segunda metade. Ex.: Vet[0] = 10, logo, Vet[10] = 10 + 2%.

***********/

#include<stdio.h>

int main() {
	float vet_a[20];
	int i;
	
	printf("Informe os primeiros 10 elementos do vetor X\n");
	for (i=0; i < 10; i++){ 
		printf("A[%d]: ", i);
		scanf("%f", &vet_a[i]);
		if (i%2 == 0)
			vet_a[i+10] = vet_a[i] * 1.02;
		else vet_a[i+10] = vet_a[i] * 1.05;
	}
	
	printf("Vetor resultante\n");
	for (i=0; i < 20; i++)
		printf("A[%d]: %.2f\n", i, vet_a[i]);

	return 0;
}