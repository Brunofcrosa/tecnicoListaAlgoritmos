/**************************************************
Uma loja vende bicicletas com acréscimo de 50% sobre o preço de custo.
Ela paga a cada vendedor dois salários mínimos mensais, mais uma comissão
de 15% sobre o preço de custo de cada unidade vendida, dividida igualmente entre eles.
Escreva um algoritmo que leia o número de empregados, o valor do salário mínimo,
o preço de custo de cada bicicleta, o número de unidades vendidas e após,
calcule e escreva o salário total de cada empregado e o lucro líquido da loja.
***************************************************/


#include <stdio.h>

int main () {
	float custo, salario_minimo, salario_mensal, comissao, lucro, venda;
	int empregados, nro_bicicletas;
	
	printf("Informe o numero de empregados da loja: ");
	scanf("%d", &empregados);
	
	printf("Informe o valor do salario minimo: ");
	scanf("%f", &salario_minimo);
	
	printf("Informe o preco de custo da bicicleta: ");
	scanf("%f", &custo);
	
	printf("Informe o numero de bicicletas vendidas: ");
	scanf("%d", &nro_bicicletas);
	
	venda = custo * 1.5 * nro_bicicletas;
	
	comissao = custo * 0.15 * nro_bicicletas / empregados;
	
	salario_mensal = 2 * salario_minimo + comissao;
	
	printf("Custo das bicicletas: %.2f\n", custo * nro_bicicletas);
	
	printf("Venda de bicicletas: %.2f\n", venda);
	
	printf("Salario total: %.2f\n", salario_mensal);
	
	printf("Lucro liquido: %.2f\n", venda - (salario_mensal * empregados + custo * nro_bicicletas));
	
	return 0;
}