/******************************************************************************
Escreva um programa para ler as notas das duas avaliações de um aluno no semestre.
Faça um procedimento que receba as duas notas por parâmetro e calcule e escreva
a média semestral e a mensagem “PARABÉNS! Você foi aprovado!” somente se o aluno
foi aprovado (considere 6.0 a média mínima para aprovação).
*******************************************************************************/

#include <stdio.h>

float media (float nota1, float nota2){
	return (nota1+nota2)/2;
}

int main(){
	float nota1, nota2, md;
	printf("Informe a primeira nota do aluno: ");
	scanf("%f", &nota1);
	printf("Informe a primeira nota do aluno: ");
	scanf("%f", &nota2);
	md = media(nota1, nota2);
	printf("\nMedia final = %.2f", md);
	if ( md >= 6)
	  	printf("\nPARABENS! Voce foi aprovado!");
	else printf("\nInfelizmente voce nao foi aprovado!");
    return 0;
}

