/* Elaborar um programa que calcule o volume de uma caixa retangular. */

#include <stdio.h>

int main()
{
    float largura, comprimento, altura;
    
    printf("Informe a largura da caixa: ");
    scanf("%f", &largura);
    printf("Informe o comprimento da caixa: ");
    scanf("%f", &comprimento);
    printf("Informe a altura da caixa: ");
    scanf("%f", &altura);
    printf("\nVolume da caixa: %.3f", largura*comprimento*altura);
    
    return 0;
}

