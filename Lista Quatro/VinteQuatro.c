/*********
Faça um algoritmo que leia um vetor de 10 elementos inteiros.
Modifique o vetor de modo que o primeiro elemento passe para a última posição,
e desloque todos os outros para uma posição à esquerda. Imprima o vetor modificado.
Exemplo:
	Antes:	12   35   25    14   1    85  10   110   44    996 
	Depois: 35   25   14    1     85  10  110  44    996  12

***********/

#include<stdio.h>
int main() {
	int vetor[10], i, aux;
	
	printf("Informe os elementos do vetor\n");
	
	for (i=0; i < 10; i++){ 
		printf("Vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\nVetor modificado\n");
	
	aux = vetor[0];
	for (i=0; i < 10; i++){ 
		if (i < 9)
			vetor[i] = vetor[i+1];
		else vetor[i] = aux;
		printf("Vetor[%d]: %d\n", i, vetor[i]);
	}
	
	return 0;
}