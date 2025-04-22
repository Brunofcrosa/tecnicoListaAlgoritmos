/***********************
Elaborar um programa que efetue a leitura de valores positivos inteiros até
que um valor negativo seja informado. Ao final deverão ser apresentados o
maior e menor valor.

************************/

#include<stdio.h>

int main () {
	int valor, maior, menor;
	
	printf("O programa sera encerrado quando for informado um valor negativo\n");
	
	printf("\nInforme o valor: ");
	scanf("%d", &valor);
	if (valor > 0){
		menor = valor;
		maior = valor;
	}
	do {
		if (valor < menor)
			menor = valor;
		if (valor > maior)
			maior = valor;
		printf("\nInforme o valor: ");
		scanf("%d", &valor);
	} while (valor >= 0);
	
	printf("\nMenor valor informado: %d", menor);
	printf("\nMaior valor informado: %d", maior);
	
	return 0;
}