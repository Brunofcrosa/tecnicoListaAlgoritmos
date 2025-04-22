/*******************************************************************
Fazer um algoritmo que leia um número inteiro e mostre uma mensagem
dizendo se é primo ou não.
*******************************************************************/

#include<stdio.h>

int main(){
    int numero, primo=1, i;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	for (i=2; i < numero && primo; i++)
        if (numero % i == 0)
		    primo = 0;
	if (primo)
		printf("O numero %d eh primo", numero);
	else printf("O numero %d nao eh primo", numero);
	
	return 0;
}