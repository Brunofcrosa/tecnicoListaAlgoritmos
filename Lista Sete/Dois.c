/******************************************************************************

Faça um programa que lê três valores do tipo inteiro. Encontre o maior deles usando
a função do exercício 1.

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
    int a, b, c, maior;
    
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    printf("Informe o terceiro valor: ");
    scanf("%d", &c);
    
    maior = maior_valor(a, b);
    maior = maior_valor(maior, c);
    
    printf("Maior valor: %d", maior);

    return 0;
}

