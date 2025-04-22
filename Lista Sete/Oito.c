/******************************************************************************
Escreva um programa que contenha uma função para calcular o desconto de um
produto e outra função para calcular o valor total da venda. A primeira função
deve receber como parâmetros o valor do produto e a porcentagem do desconto e
retornar o novo preço do produto. A segunda função deve receber como parâmetros
a quantidade comprada, o preço do produto e o percentual de desconto e calcular
o preço total já com o desconto. O programa deve apresentar o preço original
do produto, o valor com o desconto e o valor total da venda. 
*******************************************************************************/

#include <stdio.h>

float calcula_desconto (float valor, float porc){
    return valor - valor*porc/100;
}

float calcula_total (float quant, float preco, float porc){
    return quant * calcula_desconto(preco, porc);
}

int main()
{
    float preco, porc, quant;
    
    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    printf("Informe o percentual de desconto: ");
    scanf("%f", &porc);
    printf("Informe a quantidade do produto: ");
    scanf("%f", &quant);
    
    printf("\nPreco original do produto: %.2f\n", preco);
    printf("\nPreco do produto com desconto: %.2f\n", calcula_desconto(preco, porc));
    printf("\nValor total: %.2f\n", calcula_total(quant, preco, porc));
    
    return 0;
}

