/* A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros.
Faça um programa que receba um valor de uma compra e mostre o valor das prestações */
#include <stdio.h>

int main()
{
    float compra;
    
    printf("Informe o valor total da compra: ");
    scanf("%f", &compra);
    printf("O valor de cada parcela é: %.2f", compra/5);

    return 0;
}
