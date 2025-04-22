/******************************************************************************

Faça um programa em C que usa uma função em linguagem que receba dois números do
tipo inteiro e retorne o maior valor.

*******************************************************************************/
#include <stdio.h>

int maior_valor(int a, int b) {
    int maior = a;
    if (b > a)
        maior = b;
    return maior;
}

int main()
{
    int a, b, maior;
    
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    
    maior = maior_valor(a, b);
    
    printf("Maior valor: %d", maior);

    return 0;
}
