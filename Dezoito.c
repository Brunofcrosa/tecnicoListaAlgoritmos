/* Elaborar um programa que leia um número inteiro e apresente o quadrado
deste número */

#include <stdio.h>

int main()
{
    int numero;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    printf("Numero %d elevado ao quadrado = %d", numero, numero * numero);
        
    return 0;
}

