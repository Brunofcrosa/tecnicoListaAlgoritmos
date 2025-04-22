/******************************************************************************

Um usuário deseja um algoritmo onde possa escolher que tipo de média
deseja calcular a partir de três notas. Faça um programa que leia as notas, a
opção escolhida pelo usuário e calcule a média.
1. Média aritmética
2. Média ponderada (pesos 3, 3 e 4)

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    int tipo;
    
    printf("Informe as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("Informe o tipo de media (1) Aritmetica - (2) Ponderada: ");
    scanf("%d", &tipo);
        
    if (tipo == 1) {
    	media = (n1 + n2 + n3)/3;
    	printf("Media calculada: %.2f", media);
	} else if (tipo == 2) {
			  media = n1 * 0.3 + n2 * 0.3 + n3 * 0.4;
			  printf("Media calculada: %.2f", media);
	} else printf("Opcao invalida");
            
    return 0;
}
