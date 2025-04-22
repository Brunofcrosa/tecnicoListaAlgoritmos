/* Elaborar um programa que leia dois valores e apresente os resultados das
quatro operações aritméticas básicas. */

#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Informe dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    printf("\n%d + %d = %d", a, b, a + b);
    printf("\n%d - %d = %d", a, b, a - b);
    printf("\n%d * %d = %d", a, b, a * b);
    printf("\n%d \\ %d = %d", a, b, a / b);
        
    return 0;
}

