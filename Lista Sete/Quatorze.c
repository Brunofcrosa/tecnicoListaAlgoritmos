/******************************************************************************
Escreva um programa para calcular a potência de um número. Para isso, crie uma
função que receba como parâmetro dois números inteiros, o primeiro sendo a base
e o segundo o expoente. Ex: potencia (2, 2) = 4
*******************************************************************************/

#include <stdio.h>

float potencia (float a, float b){
	float pot = a;
	for (int i = 1; i < b; i++)
		pot *= a;
	return pot;
}

int main()
{
	float a, b;
    	
	printf("Informe a base: ");
  	scanf("%f", &a);
  	printf("Informe o expoente: ");
  	scanf("%f", &b);
    printf("%.0f elevado na potencia %.0f = %.0f", a, b, potencia(a, b));
    
    return 0;
}

