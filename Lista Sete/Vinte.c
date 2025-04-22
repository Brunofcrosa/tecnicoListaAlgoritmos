/******************************************************************************
Faça  um programa que leia a altura e o sexo (codificado da seguinte forma:
(1:feminino, 2:masculino) de uma pessoa. Depois faça uma função   chamada pesoideal
que receba a altura e o sexo via parâmetro e que calcule e retorne seu peso
ideal, utilizando as seguintes equações: 
- para homens : (72.7 * altura) – 58
- para mulheres : (62.1 * altura) – 44.7 
*******************************************************************************/

#include <stdio.h>

float pesoideal (float altura, int sexo){
	if (sexo == 1)
		return 62.1 * altura - 44.7;
	return 72.7 * altura - 58;
}

int main(){
	float altura;
	int sexo;
	printf("Informe a altura em metros: ");
	scanf("%f", &altura);
	do {
		printf("\nInforme o sexo (1 - Feminino, 2 - Masculino): ");
		scanf("%d", &sexo);
		if (sexo != 1 && sexo != 2)
			printf("\nSexo invalido!");
	} while (sexo != 1 && sexo != 2);
	printf("\nPeso ideal = %.2f kg", pesoideal(altura, sexo));
	
	
    return 0;
}

