/******************************************************************************
Escreva uma função que receba como parâmetro um vetor com 10 números inteiros
e retorne o menor valor no vetor. 
*******************************************************************************/

#include <stdio.h>

int menor_valor (int vetor[]){
	int i, menor;
	menor = vetor[0];
	for (i=1; i <= 9; i++)
		if (vetor[i] < menor)
			menor = vetor[i];
    return menor;
}

int main()
{
    int vetor[10];
    
    printf("Informe os elementos do vetor\n");
    for (int i=0; i < 10; i++){
    	printf("A[%d]: ", i);
    	scanf("%d", &vetor[i]);
	}
    
    printf("\nMenor valor no vetor: %d", menor_valor(vetor));
    
    return 0;
}

