/******************************************************************************

Ler 10 valores inteiros e os armazene em um vetor. O programa deve percorrer o
vetor e contar a quantidade de números pares e a quantidade de números ímpares.
Apresente como resultado as quantidades encontradas.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], i, pares=0, impares=0;
    
    printf("Informe os elementos do vetor\n");
    for (i=0; i < 10; i++) {
        printf("Elemento[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (i=0; i < 10; i++)
    
        if (vetor[i] % 2 == 0)
            pares++;
        else impares++;
        
    printf("Quantidade de elementos pares: %d\n", pares);
    printf("Quantidade de elementos impares: %d", impares);

    return 0;
}
