/******************************************************************************
Crie um programa que contenha uma função, que receba o tempo em segundos como
parâmetro. A função deve fazer uma contagem regressiva de x segundos que
apresente a contagem na tela. Dica: para o timer utilize a a função _sleep(1000).
*******************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>

void contagem_regressiva (int segundos){
	for (int i=segundos; i >= 0; i--){
		system("clear");
		printf("\n%d", i);
		sleep(1);
	}
		
}

int main()
{
	int segundos;
	
	printf("Informe o tempo em segundos para a contagem regressiva: ");
  	scanf("%d", &segundos);
  	printf("\nContagem regressiva...\n");
    contagem_regressiva(segundos); 
    return 0;
}

