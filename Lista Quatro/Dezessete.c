/*********
Desenvolver um algoritmo que leia dois vetores (A e B) com 10 valores inteiros cada.
Construir os vetores C e D de mesmo tipo, sendo que o vetor C deve ser
formado pelos elementos de índice ímpar dos vetores A e B, e o vetor D deve ser
formado pelos valores dos índices pares de A e B. Imprimir os valores de C e D.
***********/

#include<stdio.h>

int main() {
	int vet_a[10], vet_b[10], vet_c[10], vet_d[10], i, c=0, d=0;
	
	printf("Informe os elementos do vetor A\n");
	for (i=0; i < 10; i++){
		printf("A[%d]: ", i);
		scanf("%d", &vet_a[i]);
		if (i%2 == 0){
			vet_c[c] = vet_a[i];
			c++;
		} else {
			vet_d[d] = vet_a[i];
			d++;		
		}	
	}
	
	printf("Informe os elementos do vetor B\n");
	
	for (i=0; i < 10; i++){
		printf("B[%d]: ", i);
		scanf("%d", &vet_b[i]);
		if (i%2 == 0){
			vet_c[c] = vet_b[i];
			c++;
		} else {
			vet_d[d] = vet_b[i];
			d++;		
		}	
	}
	
	printf ("\nVetor C\n");
	for (i=0; i < 10; i++)
		printf("C[%d]: %d\n", i, vet_c[i]);
		
	
	printf ("\nVetor D\n");
	for (i=0; i < 10; i++)
		printf("D[%d]: %d\n", i, vet_d[i]);

	return 0;
}