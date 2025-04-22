/***********************
Elaborar um programa que efetue a leitura sucessiva de valores numéricos e
apresente no final o somatório, a média e a quantidade total de valores lidos.
O programa deve fazer as leituras dos valores enquanto o usuário estiver
fornecendo valores positivos. Ou seja, o programa deve parar quando o usuário 
entrar com um valor negativo.
************************/

#include<stdio.h>

int main () {
	float valor, soma=0;
	int quant=0;
	
	printf("O programa sera encerrado quando for informado um valor negativo\n");
	
	do {
		printf("\nInforme o valor: ");
		scanf("%f", &valor);
		if (valor > 0){
			soma += valor;
			quant++;
		}
	} while (valor >= 0);
	
	printf("\nMedia dos valores: %.2f", soma/quant);
	printf("\nSoma dos valores: %.2f", soma);
	printf("\nQuantidade de valores informados: %d\n", quant);
	return 0;
}