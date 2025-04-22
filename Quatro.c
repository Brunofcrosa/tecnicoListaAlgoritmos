/**************************************************
Faça um programa para calcular a área de um triângulo e apresente
o resultado na tela.
***************************************************/

#include <stdio.h>

int main () {
	
	float base, altura;
	
	printf("Informe a base do triangulo: ");
	scanf("%f", &base);
	
	printf("Informe a altura do triangulo: ");
	scanf("%f", &altura);
	
	printf("Area do triangulo = %.2f\n", base * altura / 2);
	
	return 0;
}