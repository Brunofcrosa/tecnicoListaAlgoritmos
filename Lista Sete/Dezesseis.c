/******************************************************************************
O número 3025 possui a seguinte característica:
30 + 25 = 55
55 * 55 = 3025 
Desenvolva um algoritmo que verifica, por meio de uma função, e imprima todos os
números de quatro algarismos (de 1000 até 9999) que apresentam tal característica.
*******************************************************************************/

#include <stdio.h>

void funcao_16 (void){
	int inteiro, resto, soma;
	for (int i=1000; i <= 9999; i++){
		inteiro = i / 100;
		resto = i % 100;
		soma = inteiro + resto;
		if (soma*soma == i)
			printf("\n%d", i);
	}
}

int main()
{
	printf("Numeros que satisfazem a condicao\n");
  	funcao_16();
    return 0;
}

