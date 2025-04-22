/******************************************************************************
Escreva um programa, sem a utilização de funções para string, com uma função
para verificar se uma string é palíndromo.
*******************************************************************************/

#include <stdio.h>

int palindromo (char palavra[51]){
	int i, j, k;
	for (i=0; palavra[i]; i++);
	for (j=0, k=i-1; j <= i/2; j++, k--)
		if (palavra[j] != palavra[k])
			return 0;
    return 1;
}

int main()
{
    char palavra[51];
    
    printf("Informe a palavra: ");
    gets(palavra);
    if (palindromo(palavra))
    	printf("A palavra %s eh palindromo\n", palavra);
    else printf("A palavra %s nao eh palindromo\n", palavra);
    
    return 0;
}

