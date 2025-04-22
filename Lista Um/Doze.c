/**************************************************
Faça um programa que leia o valor de duas variáveis
A e B e a seguir troque o valor das mesmas.
Escreva o valor das variáveis lidas e após o valor
das variáveis cujos conteúdos foram trocados.
***************************************************/

#include <stdio.h>

int main () {
	
	int A, B, Aux;
	
	printf("Informe o valor de A: ");
	scanf("%d", &A);
	
	printf("Informe o valor de B: ");
	scanf("%d", &B);
	
	printf("Valor de A = %d\n", A);
	
	printf("Valor de B = %d\n", B);
	
	Aux = A;
	
	A = B;
	
	B = Aux;
	
	printf("Valor de A = %d\n", A);
	
	printf("Valor de B = %d\n", B);
	
	return 0;
}