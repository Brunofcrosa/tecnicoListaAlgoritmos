/******************************************************************************

Faça um algoritmo que leia dois valores e informe se os valores são iguais.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    
    if (a == b)
        printf("Os valores %d e %d são iguais", a, b);
    else
        printf("Os valores %d e %d são diferentes", a, b);
    
            
    return 0;
}
