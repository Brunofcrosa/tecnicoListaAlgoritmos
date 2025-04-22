/******************************************************************************

Fazer um algoritmo que leia um número inteiro, verifique e escreva se ele é
negativo, zero ou positivo. Caso seja positivo diga ainda se ele é par ou
ímpar.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nro;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &nro);
        
    if (nro < 0)
		printf("O numero %d eh negativo", nro);
	else if (nro == 0)
		    printf("O numero %d eh zero", nro);
		 else if (nro % 2 == 0)
				 printf("O numero %d eh positivo e par", nro); 
			  else printf("O numero %d eh positivo e impar", nro);   
            
    return 0;
}
