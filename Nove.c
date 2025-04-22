/**************************************************
Escreva um programa em C que leia o valor de um salário, um percentual de reajuste
e que aplique o índice sobre esse valor e escreva o novo salário.
***************************************************/

#include <stdio.h>

int main () {
	
	float Salario, Reajuste;
	
	printf("Informe o salario atual: ");
	scanf("%f", &Salario);
	
	printf("Informe o percentual de reajuste: ");
	scanf("%f", &Reajuste);
	
	printf("Novo salario = %.2f\n", Salario * Reajuste / 100 + Salario);
	
	return 0;
}