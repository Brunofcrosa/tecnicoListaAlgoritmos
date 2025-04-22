/******************************************************************************
Escrever uma função que receba um vetor com 10 números inteiros e retorne
quantos deles são ímpares. 
*******************************************************************************/

#include <stdio.h>

int quant_impares (int vetor[]){
	int i, cont=0;
	for (i=0; i < 10; i++)
		if (vetor[i]%2==1)
			cont++;
    return cont;
}

int main()
{
    int vetor[10];
    
    printf("Informe os elementos do vetor\n");
    for (int i=0; i < 10; i++){
    	printf("A[%d]: ", i);
    	scanf("%d", &vetor[i]);
	}
    
    printf("\nQuantidade de valores impares no vetor: %d", quant_impares(vetor));
    
    return 0;
}

