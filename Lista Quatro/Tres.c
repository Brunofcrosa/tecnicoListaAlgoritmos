/******************************************************************************

Faça um programa que lê um conjunto de 10 valores. Após a leitura, coloque em 2
vetores conforme forem pares ou ímpares. Mostre o vetor com os elementos pares
e em seguida aquele com os elementos ímpares. Cuide para imprimir somente os
elementos válidos destes vetores.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], vetor_p[10], vetor_i[10], i, pares=0, impares=0;
    
    printf("Informe os elementos do vetor\n");
    for (i=0; i < 10; i++) {
        printf("Elemento[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (i=0; i < 10; i++)
    
        if (vetor[i] %2 == 0){
            vetor_p[pares] = vetor[i];
            pares++;
        } else {
            vetor_i[impares] = vetor[i];
            impares++;
        }
    
    if (pares > 0){
        printf("\nVetor dos elementos pares\n");
        
        for (i=0; i < pares; i++)
            printf("Elemento[%d]: %d\n", i, vetor_p[i]);
    } 
    
    if (impares > 0){
        printf("\nVetor dos elementos impares\n");
        
        for (i=0; i < impares; i++)
            printf("Elemento[%d]: %d\n", i, vetor_i[i]);
    } 
    
    return 0;

}
