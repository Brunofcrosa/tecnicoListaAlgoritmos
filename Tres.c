/* Faça um algoritmo que receba um número e apresente na tela seu antecessor e seu
sucessor.*/

#include <stdio.h>

int main()
{
    int numero;
	
	printf("Informe um valor: ");
	scanf("%d", &numero);
    
    printf("Número: %d\n", numero);
    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);

    return 0;
}
