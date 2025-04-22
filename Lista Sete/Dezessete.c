/******************************************************************************
Escreva um programa que leia o raio de um círculo e faça duas funções: uma
função chamada área que calcula e retorna a área do círculo e outra função
chamada perimetro que calcula e retorna o perímetro do círculo.
Área = PI * r2; 
Perímetro = PI * 2 * r;
*******************************************************************************/

#include <stdio.h>

float area (float raio){
	return raio*raio*3.14159265358979323846;
}

float perimetro (float raio){
	return 2*raio*3.14159265358979323846;
}

int main(){
	
	float valor_raio;
	printf("Informe o valor do raio: ");
	scanf("%f", &valor_raio);
  	printf("\nArea do circulo = %.2f", area(valor_raio));
  	printf("\nPerimetro = %.2f", perimetro(valor_raio));
    return 0;
}

