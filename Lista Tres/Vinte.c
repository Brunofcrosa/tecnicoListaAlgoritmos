/***********************
Fazer um algoritmo que leia números inteiros ate que seja informado zero, o
qual deve ser desconsiderado e após escreva quantos números informados
são negativos, e a média aritmética dos números maiores que zero.
************************/

#include<stdio.h>

int main () {
	int valor, soma=0, positivos=0, negativos=0;
	
	printf("O programa sera encerrado quando for informado o valor zero\n");
	
	do {
		printf("\nInforme o valor: ");
		scanf("%d", &valor);
		if (valor < 0)
			negativos++;
		else if (valor > 0){
			soma += valor;
			positivos++;
		}
	} while (valor != 0);
	
	printf("\nQuantidade de numeros informados que sao negativos: %d", negativos);
	printf("\nMedia aritmetica dos numeros maiores que zero: %f", (float) soma/positivos);
	
	return 0;
}