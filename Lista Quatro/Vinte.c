/*********
Construa um algoritmo para ler 2 vetores reais de 10 posições  e
depois criar um terceiro vetor cujo conteúdo de cada posição é:
1, se o número armazenado em uma posição do primeiro vetor é o mesmo
armazenado na posição respectiva do segundo vetor e 0, se não for o mesmo.
Apresentar o terceiro vetor.
***********/

#include<stdio.h>

int main() {
	float vet_a[10], vet_b[10];
	int vet_c[10];
	int i;
	
	printf("Informe os elementos do vetor A\n");
	for (i=0; i < 10; i++){ 
		printf("A[%d]: ", i);
		scanf("%f", &vet_a[i]);
	}
	
	printf("Informe os elementos do vetor B\n");
	for (i=0; i < 10; i++){ 
		printf("B[%d]: ", i);
		scanf("%f", &vet_b[i]);
	}
	
	printf("Vetor C\n");
	for (i=0; i < 10; i++){
		if (vet_a[i] == vet_b[i])
			vet_c[i] = 1;
		else vet_c[i] = 0;
		printf("C[%d]: %d\n", i, vet_c[i]);
	}

	return 0;
}