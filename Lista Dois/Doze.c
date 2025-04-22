/******************************************************************************

Escreva um algoritmo que leia uma letra e imprima uma mensagem dizendo
se é vogal ou não.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra;
    
    printf("Informe uma letra: ");
    scanf("%c", &letra);
        
    if (letra == 'A' || letra == 'a' ||
		letra == 'E' || letra == 'e' ||
		letra == 'I' || letra == 'i' ||
		letra == 'O' || letra == 'o' ||
		letra == 'U' || letra == 'u') 
    	printf("A letra %c eh vogal", letra);
	else printf("A letra %c nao eh vogal", letra);
            
    return 0;
}
