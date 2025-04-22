/******************************************************************************

A partir de dois números fornecidos pelo usuário, escrever uma das seguintes
mensagens:
a. Os dois são pares
b. Os dois são ímpares
c. O primeiro é par e o segundo é ímpar
d. O primeiro é ímpar e o segundo é par

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nro1, nro2;
    
    printf("Informe dois valores inteiros: ");
    scanf("%d %d", &nro1, &nro2);
        
    if (nro1 % 2 == 0 && nro2 % 2 == 0) 
    	printf("Os dois numeros sao pares: %d e %d", nro1, nro2);
	else if (nro1 % 2 == 1 && nro2 % 2 == 1)
			printf("Os dois numeros sao impares: %d e %d", nro1, nro2);
		 else if (nro1 % 2 == 0)
				 printf("O primeiro eh par e o segundo eh impar: %d e %d", nro1, nro2);
			  else printf("O primeiro eh impar e o segundo eh par: %d e %d", nro1, nro2);
            
    return 0;
}
