/*****************************************************
Um posto está vendendo combustíveis com as seguintes condições:
● Álcool: até 20 litros, desconto de 3% por litro e acima de 20 litros,
desconto de 5% por litro.
● Gasolina: até 20 litros, desconto de 4% por litro e acima de 20 litros,
desconto de 6% por litro.
Escreva um programa em C que leia o número de litros vendidos, o tipo de
combustível (álcool ou gasolina), calcule e escreva o valor a ser pago pelo
cliente, sabendo-se que o preço da gasolina e do álcool devem ser
informados pelo usuário do programa.
*****************************************************/

#include <stdio.h>

int main() {
	float litros, valor, prc_alcool, prc_gasolina;
	int tipo;
	
	printf("Informe o preço do litro do alcool: ");
	scanf("%f", &prc_alcool);
	
	printf("Informe o preço do litro da gasolina: ");
	scanf("%f", &prc_gasolina);
	
	printf("Informe o tipo de combustivel (1 - Alcool ou 2 - Gasolina): ");
	scanf("%d", &tipo);
	
	if (tipo == 1 || tipo == 2) {
		printf("Informe a quantidade abastecida (litros): ");
		scanf("%f", &litros);
		if (tipo == 1)
			if (litros <= 20)
				valor = litros * prc_alcool * 0.97;
			else valor = litros * prc_alcool * 0.95;calc
		else if (litros <= 20)
				valor = litros * prc_gasolina * 0.96;
			 else valor = litros * prc_gasolina * 0.94;
		printf("Valor a ser pago: %.2f", valor);
	}
	else printf("Tipo de combustivel invalido!\n");
	
	return 0;
}