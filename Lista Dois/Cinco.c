/******************************************************************************

Criar um programa que lê um número inteiro e exibe a mensagem dizendo se
ele é múltiplo de 7 ou não

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor;
    
    printf("Informe o valor: ");
    scanf("%d", &valor);
    
    if (valor % 7 ==0)
        printf("O valor %d é multiplo de 7", valor);
    else
        printf("O valor %d não é multiplo de 7", valor);
    
    return 0;
}