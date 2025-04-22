/***********************
Considere um frigorífico com 100 bois. Cada boi traz no pescoço um cartão contendo o
número de identificação e o seu peso. Fazer um programa em C que escreve o número e o
peso do boi mais pesado. Supor que não haja empate no maior peso.
************************/

#include<stdio.h>

int main () {
	int i, numero, num_maior;
	float peso, maior;
	
	maior = 0.0;
	num_maior = 0;
		
	for (i=0; i < 5; i++){
		printf("\nInforme o numero do boi: ");
		scanf("%d", &numero);
		
		printf("\nInforme o peso do boi: ");
		scanf("%f", &peso);
		
		if (peso > maior) {
			maior = peso;
			num_maior = numero;
		}
	}
	
	printf("\nBoi mais pesado\n");
	printf("Numero: %d\n", num_maior);
	printf("Peso: %.1f\n", maior);
		
	return 0;
}