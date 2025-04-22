/******************************************************************************

Criar um programa que possa entrar com três números e, para cada um, imprimir o
seu dobro. Use uma função sem retorno (void) para calcular o dobro de cada
numero lido.

*******************************************************************************/
#include <stdio.h>

void dobro(float valor) {
    printf("%.3f", valor * 2);
}

int main()
{
    float a;
    int i;
    
    for (i=0; i < 3; i++) {
        printf("\nInforme o valor: ");
        scanf("%f", &a);
        printf("O dobro de %.3f = ", a);
        dobro(a);
    }
    
    return 0;
}
