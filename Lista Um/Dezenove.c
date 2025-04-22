/* Desenvolver um programa que leia três valores inteiros e apresente como
resultado o valor da soma dos quadrados dos três valores lidos. */

#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Informe tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Soma dos quadrados dos valores = %d", a * a + b * b + c * c);
        
    return 0;
}

