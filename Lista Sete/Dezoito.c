/******************************************************************************
Escreva um programa para ler uma temperatura em graus Fahrenheit. Faça uma
função chamada celsius para calcular e retornar o valor correspondente em graus
Celsius. Equacao C = ((F-32)/9)*5.
*******************************************************************************/

#include <stdio.h>

float celsius (float fahrenheit){
	return (fahrenheit-32)/9*5;
}

int main(){
	float temperatura;
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &temperatura);
  	printf("\nTemperatura em Celsius = %.2f", celsius(temperatura));
    return 0;
}

