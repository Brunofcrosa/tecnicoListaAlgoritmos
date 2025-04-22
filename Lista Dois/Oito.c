/*****************************************************
Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa
de 1% para carros fabricados antes de 1990 e uma taxa de 1.5% para os fabricados
de 1990 em diante, taxa esta incidindo sobre o valor de tabela do carro.
O algoritmo abaixo lê o ano e o preço do carro e a seguir calcula e imprime o
imposto a ser pago.
*****************************************************/

#include <stdio.h>

int main() {
	float preco;
	int ano;
	
	printf("Informe o ano do carro: ");
	scanf("%d", &ano);
	
	printf("Informe o preco do carro: ");
	scanf("%f", &preco);
	
	if (ano < 1990)
		printf("Valor do imposto: %.2f", preco/100);
	else printf("Valor do imposto: %.2f", preco*1.5/100);
	
	return 0;
}