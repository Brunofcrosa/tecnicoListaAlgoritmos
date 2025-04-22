/******************************************************************************
Utilizando o conceito de funções, escreva um programa com 5 opções: 4 para
realizar as operações matemáticas básicas, e 1 para encerrar o programa.
Ex: 
1 – Adição
2 – Subtração
3 – Multiplicação 
4 – Divisão
0 – Sair 
Implemente uma função para cada operação. Não se esqueça de tratar a divisão
por zero.  
*******************************************************************************/

#include <stdio.h>

float adicao (float a, float b){
	return a+b;
}

float subtracao (float a, float b){
	return a-b;
}

float multiplicacao (float a, float b){
	return a*b;
}

float divisao (float a, float b){
	return a/b;
}

int main()
{
	float a, b, resultado;
	int opcao;
    	
  	do {
  		system("cls");
		printf("\nMenu de opcoes\n");
      	printf("1 - Adicao\n");
      	printf("2 - Subtracao\n");
      	printf("3 - Multiplicao\n");
      	printf("4 - Divisao\n");
      	printf("0 - Sair\n");
      	
      	printf("\nEscolha uma opcao: ");
      	scanf("%d", &opcao);
		  
		if (opcao > 0 && opcao < 5) {
			printf("Informe o valor de A: ");
	      	scanf("%f", &a);
	      	printf("Informe o valor de B: ");
	      	scanf("%f", &b);
		}
      	
      	switch(opcao){
      		case 0: printf("\nEncerrando o programa...");
      				break;
      		case 1: printf("\n%.2f + %.2f = %.2f", a, b, adicao(a, b));
  					break;
  			case 2: printf("\n%.2f - %.2f = %.2f", a, b, subtracao(a, b));
  					break;
  			case 3: printf("\n%.2f * %.2f = %.2f", a, b, multiplicacao(a, b));
  					break;
  			case 4: if (b == 0)
  						printf("\nERRO! Divisao por zero");
			  		else printf("\n%.2f / %.2f = %.2f", a, b, divisao(a, b));
  					break;
  			default: printf("\nOpcao invalida! Tente novamente!");
		  }
		getch();
	} while (opcao != 0);
      	
    return 0;
}

