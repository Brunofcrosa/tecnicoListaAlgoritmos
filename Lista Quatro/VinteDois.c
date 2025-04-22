/*********
O guichê de pedágio de uma rodovia possui um equipamento que registra diariamente
a quantidade de carros que ali passaram. Faça um algoritmo para ler cada registro
do mês de setembro e informar qual o maior e menor volume de carros que passaram
e em qual dia isso ocorreu. . Considere que não existem quantidades de carros
iguais nos registros diários.
Ex.: O maior volume ocorreu no dia 22 e foi de 775 carros.
O menor volume ocorreu no dia 27 e foi de 514 carros.

***********/

#include<stdio.h>

int main() {
	int vetor[30];
	int i, menor, maior, dia_menor=0, dia_maior=0;
	
	printf("Informe a quantidade diaria de carros para o mes de setembro\n\n");
	for (i=0; i < 30; i++){ 
		printf("Dia[%d]: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	menor = vetor[0];
	maior = vetor[0];
	
	for (i=1; i < 30; i++){
		if (vetor[i] < menor) {
			menor = vetor[i];
			dia_menor = i;
		}
		
		if (vetor[i] > maior) {
			maior = vetor[i];
			dia_maior = i;
		}
	}
	
	printf("\nMenor volume de veiculos: %d - dia %d de setembro\n", menor, dia_menor+1);
	printf("Maior volume de veiculos: %d - dia %d de setembro", maior, dia_maior+1);
	
	return 0;
}