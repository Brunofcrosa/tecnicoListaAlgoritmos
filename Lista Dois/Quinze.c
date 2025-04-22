/******************************************************************************

Fazer um algoritmo que leia 6 números inteiros escrevendo o percentual de
números informados que são positivos e ímpares.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int nro1, nro2, nro3, nro4, nro5, nro6, cont=0;
    
    printf("Informe seis numeros inteiros: ");
    scanf("%d %d %d %d %d %d", &nro1, &nro2, &nro3, &nro4, &nro5, &nro6);
         
    if (nro1 > 0 && nro1 % 2 == 1)
		cont++;
	if (nro2 > 0 && nro2 % 2 == 1)
		cont++;
	if (nro3 > 0 && nro3 % 2 == 1)
		cont++;
	if (nro4 > 0 && nro4 % 2 == 1)
		cont++;
	if (nro5 > 0 && nro5 % 2 == 1)
		cont++;
	if (nro6 > 0 && nro6 % 2 == 1)
		cont++;   
		
	printf("O percentual de numeros positivos e impares eh: %.2f", (float)cont*100/6);
            
    return 0;
}
