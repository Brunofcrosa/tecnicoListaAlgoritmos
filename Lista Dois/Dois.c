/******************************************************************************

Elabore um programa em C que leia dois números inteiros e mostre o
resultado da diferença do maior valor pelo menor.

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
    else if (a > b)
        	printf("%d - %d = %d", a, b, a-b);
    	 else printf("%d - %d = %d", b, a, b-a);
            
    return 0;
}
