/*********
Faça  um algoritmo que leia um conjunto de 10 preços  de livros de uma loja e
gere um vetor contendo a mesma sequência de preços, ignorando os valores duplicados
Exemplo:
	Antes:    23.50  22.00  23.50  18.90  18.90  29.90  43.90  20.00  19.90 
	Depois:  23.50  22.00  18.90  29.90  43.90  20.00  19.90
***********/

#include<stdio.h>
int main() {
	float vetor[10], aux[10];
	int i, quant, cont;
	
	printf("Informe os precos dos livros\n");
	
	for (i=0; i < 10; i++){ 
		printf("Livro[%d]: ", i);
		scanf("%f", &vetor[i]);
	}
	
	aux[0] = vetor[0];
	quant = 1;
	
	for (i=1; i < 10; i++){ 
		cont = 0;
		for (int j=0; j < quant && cont == 0; j++)
			if (vetor[i] == aux[j])
				cont++;
		if (cont == 0){
			aux[quant]=vetor[i];
			quant ++;
		}	
	}	
	
	printf("\nPreco dos livros sem valores duplicados\n");		
	
	for (i=0; i < quant; i++)
		printf("Vetor[%d]: %.2f\n", i, aux[i]);
	
	return 0;
}