/*********
Faça um algoritmo para ler os valores gastos em cheque por uma pessoa durante um mês,
e depois imprimir: a lista com todos os valores, o maior valor, o menor valor e a média
de todos os valores. No início do algoritmo o usuário deve informar quantos cheques
foram usados; estabeleça um número máximo de cheques.
***********/

#include<stdio.h>
const int MAX = 30;
int main() {
	float cheques[MAX], menor, maior, media, soma=0;
	int i, maximo, quantidade;
	
	do {
		printf("Informe a quantidade de cheques no mes: ");
		scanf("%d", &quantidade);
		if (quantidade > MAX)
			printf("\nAtencao! Quantidade de cheques invalida! O numero maximo deve ser 30");
	} while (quantidade > MAX);
	
	for (i=0; i < quantidade; i++){ 
		printf("Cheque[%d]: ", i+1);
		scanf("%f", &cheques[i]);
	}
	
	printf("\nListagem de cheques emitidos\n");
	menor = cheques[0];
	maior = cheques[0];
	
	for (i=0; i < quantidade; i++){ 
		printf("Cheque[%d]: %.2f\n", i+1, cheques[i]);
		soma += cheques[i];
		if (cheques[i] < menor)
			menor = cheques[i];
		if (cheques[i] > maior)
			maior = cheques[i];
	}
	
	printf("\nMenor valor: %.2f\n", menor);
	printf("\nMaior valor: %.2f\n", maior);
	printf("\nMedia de valores: %.2f\n", soma/quantidade);
	
	return 0;
}