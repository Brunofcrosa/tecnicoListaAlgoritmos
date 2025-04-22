/******************************************************************************
Leia um vetor de 12 valores do tipo inteiro e em seguida ler também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
programa deverá escrever a soma dos valores encontrados nas respectivas posições
X e Y.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[12], i, x, y;
    
    printf("Informe os elementos do vetor\n");
    for (i=0; i < 12; i++) {
        printf("Elemento[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    do {
    
        do {
            printf("Informe a posição x: ");
            scanf("%d", &x);
            
            if (x < 0 || x > 11)
                printf("Intervalo de posição inválido!\n");
                
        } while (x < 0 || x > 11);
        
        do {
            printf("Informe a posição y: ");
            scanf("%d", &y);
            
            if (y < 0 || y > 11)
                printf("Intervalo de posição inválido!\n");
                
        } while (y <0 || y > 11);
        
        if (x == y)
            printf("As posições informadas são iguais. Devem ser lidas posições diferentes!\n");
    
    } while (x == y);
    
    printf("Soma dos valores nas posições %d e %d: %d\n", x, y, vetor[x] + vetor[y]);

    return 0;
}
