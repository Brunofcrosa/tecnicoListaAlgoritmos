/***********************
Escrever um programa em C que lê um conjunto de 15 valores, um de cada vez,
acompanhados de um código 1 ou 2. O valor representa o total de cobaias utilizadas em
cada uma das 15 experiências feitas e os códigos representam respectivamente coelhos
(1) e ratos (2). Qual é o número total de cobaias utilizadas, o total de coelhos, o total de
ratos, a percentagem de coelhos e de ratos. O programa deve mostrar todos esses
valores.
************************/

#include<stdio.h>

int main () {
	int i, tipo, quant, ratos=0, coelhos=0, total=0;
		
	for (i=0; i < 15; i++){
		printf("Informe o tipo de cobaia [1] Coelho e [2] Rato: ");
		scanf("%d", &tipo);
		
		printf("Informe quantida utilizada de cobaias: ");
		scanf("%d", &quant);
		
		if (tipo == 1)
			ratos += quant;
		else coelhos += quant;
		
		total += quant;
	}
	
	printf("\nNumero total de cobaias utilizadas: %d", total);
	printf("\nNumero total de coelhos: %d", coelhos);
	printf("\nNumero total de ratos: %d", ratos);
	printf("\nPercentagem de coelhos: %.2f%%", (float)coelhos/total*100);
	printf("\nPercentagem de ratos: %.2f%%", (float)ratos/total*100); 
	
	return 0;
}