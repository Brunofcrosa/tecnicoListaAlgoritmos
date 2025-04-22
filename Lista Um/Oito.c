/**************************************************
Faça um programa em C que calcule o valor em Reais, correspondente aos dólares
que um turista possui no cofre do hotel . O programa deve solicitar os seguintes dados:
• Quantidade de dólares guardados no hotel
• A cotação do dólar naquele dia
***************************************************/

#include <stdio.h>

int main () {
	
	float Quantidade, Cotacao;
	
	printf("Informe a quantidade de dolares: ");
	scanf("%f", &Quantidade);
	
	printf("Informe a cotacao do dolar: ");
	scanf("%f", &Cotacao);
	
	printf("Valor em reais = %.2f\n", Quantidade * Cotacao);
	
	return 0;
}