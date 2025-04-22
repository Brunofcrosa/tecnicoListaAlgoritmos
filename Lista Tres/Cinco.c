/***********************
Faça um programa em C que receba a idade e o peso de 7 pessoas, calcule e mostre:
a) A quantidade de pessoas com mais de 90 quilos;
b) A média das idades das 7 pessoas;
c) A quantidade de pessoas maiores de idade (acima de 18 anos) e abaixo de 60 quilos;
d) A porcentagem de pessoas com idade entre 10 e 30 anos.
************************/

#include<stdio.h>

int main () {
	int i, idade, quant_90=0, quant_60=0, soma_idade=0, idade_10_30=0;
	float peso;
		
	for (i=0; i < 7; i++){
		printf("Informe a idade da pessoa: ");
		scanf("%d", &idade);
		
		printf("Informe o peso da pessoa: ");
		scanf("%f", &peso);
		
		if (peso > 90)
			quant_90 += 1;
		else if (peso < 60 && idade > 18)
				quant_60 +=1;	
				
		if (idade >= 10  && idade <= 30)
			idade_10_30 += 1;	
			
		soma_idade += idade;
	}
	
	printf("\nQuantidade de pessoas com mais de 90 quilos: %d", quant_90);
	printf("\nMedia de idade das pessoas: %.2f", (float)soma_idade/7);
	printf("\nQuantidade de pessoas com mais de 18 anos e abaixo de 60 quilos: %d", quant_60);
	printf("\nPercentagem de pessoas com idade entre 10 e 30 anos: %.2f%%", (float)idade_10_30/7*100);
	
	return 0;
}