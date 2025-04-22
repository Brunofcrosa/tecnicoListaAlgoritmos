/*****************************************************
Elabore um programa em C que permita se um funcionário
poderá pegar ou não, um empréstimo. Deverá ser fornecido
o salário bruto e o valor da prestação. Sabe-se que a
prestação não deve ultrapassar 25% do salário bruto.
*****************************************************/

#include <stdio.h>

int main() {
	float salario, prestacao;
	
	printf("Informe o salario bruto: ");
	scanf("%f", &salario);
	printf("Informe o valor da prestacao: ");
	scanf("%f", &prestacao);
	
	if (prestacao > salario * 0.25)
		printf("Emprestimo negado. Valor da prestacao acima do permitido");
	else printf("Emprestimo aprovado");
	
	return 0;
}