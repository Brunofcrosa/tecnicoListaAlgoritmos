/***********************
Fazer um algoritmo que leia três notas para cada um dos
vinte alunos de uma turma e escreva a média aritmética
de cada aluno. 

************************/

#include<stdio.h>

int main () {
	int i;
	float n1, n2, n3, soma;
	
	
	for (i=0; i < 20; i++){
		soma=0;
		printf("\nInforme as notas do aluno %d\n", i+1);
		printf("Prova 1: ");
		scanf("%f", &n1);
		soma += n1;
		printf("Prova 2: ");
		scanf("%f", &n2);
		soma += n2;
		printf("Prova 3: ");
		scanf("%f", &n3);
		soma += n3;
		printf("\nMedia do aluno %d: %.2f\n", i+1, soma/3);
	}
		
	return 0;
}