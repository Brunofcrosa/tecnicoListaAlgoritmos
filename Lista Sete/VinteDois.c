/******************************************************************************
Faça um programa que lê um conjunto de dez valores do tipo inteiro. A seguir
coloca em 2 vetores conforme os valores forem pares ou ímpares. No programa
principal imprima o vetor com os elementos pares e em seguida aquele com os
elementos ímpares. Use uma função para separar os valores e outra para mostrar
os valores. Cuide para mostrar somente os elementos válidos destes vetores.
*******************************************************************************/

#include <stdio.h>
const int MAX = 10;

void le_vetor (int vetor[]){
    srand(time(NULL));
    for (int i=0; i < MAX; i++) {
        //printf("Elemento[%d]: ", i);
        vetor[i] = rand()%100;
        //scanf("%d", &vetor[i]);
    }
}

void mostra_vetor (int vetor[], int quant) {
    for (int i=0; i < quant; i++){
        printf("Elemento[%d]: ", i);
        printf("%d\n", vetor[i]);
    }
}

void separa_vetor(int vetor[], int vet_par[], int vet_impar[], int *pares, int *impares) {
    int i;

    for (i=0, *pares = 0, *impares = 0; i < MAX; i++){

        if (vetor[i] % 2 == 0) {
            vet_par[*pares] = vetor[i];
            (*pares)++;
        }
        else {
            vet_impar[*impares] = vetor[i];
            (*impares)++;
        }
    }
}


int main()
{
    int pares, impares, vetor[MAX], vet_pares[MAX], vet_impar[MAX];
    
    printf("Informe os elementos do vetor\n");
    
    le_vetor(vetor);
    
    printf("\nVetor\n");
    
    mostra_vetor(vetor, MAX);
    
    separa_vetor(vetor, vet_pares, vet_impar, &pares, &impares);
    
    printf("\nVetor dos pares\n");
    mostra_vetor(vet_pares, pares);
    
    printf("\nVetor dos impares\n");
    mostra_vetor(vet_impar, impares);
    
    return 0;
}
