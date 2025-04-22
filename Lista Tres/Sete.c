/***********************
Escrever um programa em C que leia 5 valores para uma variável n e, para cada um
deles, calcule a tabuada de 1 até n. O programa deve mostrar a tabuada da seguinte
forma:
1 x n = n
2 x n = 2n
3 x n = 3n
.......
n x n = n2
************************/

#include<stdio.h>

int main () {
	int i, j, numero;
		
	for (i=0; i < 5; i++){
		printf("\nInforme o numero: ");
		scanf("%d", &numero);
		
		printf("\nTabuada do numero %d\n", numero);
		
		for (j=1; j <= numero; j++)
			printf("\n%d x %d = %d", j, numero, j*numero);
	}
		
	return 0;
}