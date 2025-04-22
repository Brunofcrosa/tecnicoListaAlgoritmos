/**************************************************
Faça um programa que leia três valores, efetue e
guarde a soma dos dois primeiros e o produto dos dois
últimos. Apresente como resultado a soma e o produto.
***************************************************/

#include <stdio.h>

int main () {
	
	int A, B, C, Soma, Produto;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &A);
	
	printf("Informe o segundo valor: ");
	scanf("%d", &B);
	
	printf("Informe o terceiro valor: ");
	scanf("%d", &C);
	
	Soma = A + B;
	
	Produto = B * C;
	
	printf("Soma = %d\n", Soma);
	
	printf("Produto = %d\n", Produto);
		
	return 0;
}