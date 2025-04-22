/******************************************************************************

Leia um vetor de 10 valores inteiros e a seguir mostre quantos iguais ao último
valor existe no vetor.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], i, iguais=0;
    
    printf("Informe os elementos do vetor\n");
    for (i=0; i < 10; i++) {
        printf("Elemento[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (i=0; i < 9; i++)
    
        if (vetor[i] == vetor[9])
            iguais++;
        
    printf("Quantidade de elementos iguais ao último elemento %d: %d\n", vetor[9], iguais);
    
    return 0;
}
