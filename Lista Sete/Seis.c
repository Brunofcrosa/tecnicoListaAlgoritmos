/******************************************************************************

Fazer um programa que receba um número e escreva  “eh primo” no caso do número
ser primo,  ou “não eh primo” caso o numero não seja primo. Use uma função que
retorna 1 se é primo ou 0 quando não eh primo.

*******************************************************************************/
#include <stdio.h>

int primo(int numero) {
    int i;
    for (i = 2; i < numero; i++)
        if (numero % i == 0)
            return 0;
    return 1;
}

int main()
{
    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);
    
    if (primo(numero) == 1)
        printf("%d eh primo", numero);
    else printf("%d não eh primo", numero);

    return 0;
}
