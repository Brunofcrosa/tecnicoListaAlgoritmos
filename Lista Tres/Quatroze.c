/***********************
Ler informações sobre 10 pessoas de um grupo. Para cada pessoa
deve ser lida a altura e o sexo. Fazer um algoritmo que calcule
e mostre: 
a) A maior e a menor altura do grupo; 
b) A média das alturas das mulheres; 
c) A média das alturas de todos do grupo. 
************************/

#include<stdio.h>

int main () {
	float altura, maior, menor, soma_f=0, soma=0;
	int i, cont_f=0;
	char sexo;
	
	for (i=0; i < 10; i++){
		printf("Informe o sexo da pessoa (m ou f): ");
		scanf(" %c", &sexo);
		
		printf("Informe a altura da pessoa: ");
		scanf("%f", &altura);
		
		if (i == 0){
			menor = altura;
			maior = altura;
		}
		
		if (altura < menor)
			menor = altura;
			
		if (altura > maior)
			maior =  altura;
			
		if (sexo == 'f' || sexo == 'F'){
			soma_f += altura;
			cont_f++;
		}
			
			
		soma += altura;
	}
	printf("\nMenor altura no grupo: %.3f", menor);
	printf("\nMaior altura no grupo: %.3f", maior);
	printf("\nMedia da altura das mulheres: %.3f", soma_f/cont_f);
	printf("\nMedia da altura no grupo: %.3f", soma/10);
	
	return 0;
}