/*******
Faça um programa em C que leia um vetor de 20 posições
e apresente o menor e o maior valor e as posições que eles se encontram
*******/

#include<stdio.h>

int main() {
	int vet[20], maior, pos_maior, menor, pos_menor;
	
	printf("Informe os elementos do vetor\n");
	
	for (int i=0; i < 19; i++){
		printf("Elemento[%d]: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	menor = vet[0];
	pos_menor = 0;
	maior = vet[0];
	pos_maior = 0;
	
	for (int i=1; i < 19; i++)
		if (vet[i] < menor){
			menor = vet[i];
			pos_menor = i;
		} else if (vet[i] > maior){
			maior = vet[i];
			pos_maior = i;
		}
		
	printf("\nMenor valor: %d - Posicao: %d", menor, pos_menor+1);	
	
	printf("\nMaior valor: %d - Posicao: %d", maior, pos_maior+1);	
	
	return 0;
}