/******************************************************************************

Escrever um algoritmo que lê um vetor N[20] e o escreve. Troque, a seguir,
o 1º elemento com 11º, o 2º com o 12º, etc., até o 10º com o 20º e escreva o
vetor assim modificado.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[20], i, aux;
    
    printf("Informe os elementos do vetor\n");
    for (i=0; i < 20; i++) {
        printf("Elemento[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nElementos do Vetor\n");
    for (i=0; i < 20; i++)
        printf("Elemento[%d]: %d \n", i, vetor[i]);
        
    for (i=0; i < 10; i++) {
        aux = vetor[i+10];
        vetor[i+10] = vetor[i];
        vetor[i] = aux;
    }
    
    printf("\nVetor Modificado\n");
    for (i=0; i < 20; i++)
        printf("Elemento[%d]: %d \n", i, vetor[i]);
    
    
    return 0;
}

