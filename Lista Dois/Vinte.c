/******************************************************************************

Faça um programa que receba um número de 1 a 5 e escreva o número por extenso.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    printf("Informe o número entre 1 e 5: ");
    scanf("%d", &numero);
    if (numero > 0 && numero < 6) {
        if (numero == 1)
            printf("Um");
        else if (numero == 2)
                printf("Dois");
             else if (numero == 3)
                     printf("Três");
                  else if (numero == 4)
                          printf("Quatro");
                        else printf("Cinco");  
    }
    else
        printf("O número informado está fora do intervalo!");

    return 0;
}
