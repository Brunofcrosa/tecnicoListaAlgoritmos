/******************************************************************************
Escrever um programa que leia um vetor de 30 elementos inteiros. Passe  este
vetor para uma função que mostre os valores que são maiores do que a média dos
valores digitados.
*******************************************************************************/

#include <stdio.h>
const int MAX = 30;

float le_vetor (int vetor[]){
    float media = 0;
    srand(time(NULL));
    for (int i=0; i < MAX; i++) {
        //printf("Elemento[%d]: ", i);
        vetor[i] = rand()%100;
        media += vetor[i];
        //scanf("%d", &vetor[i]);
    }
    return media / 30;
}

void mostra_vetor (int vetor[], float media) {
    for (int i=0; i < MAX; i++)
        if (vetor[i] > media)
            printf("%d\n", vetor[i]);
}

int main()
{
    int vetor[MAX];
    float media;
    
    printf("Informe os elementos do vetor\n");
    
    media = le_vetor(vetor);
    
    printf("Media dos valores digitados: %.2f", media);
    
    printf("\nElementos do Vetor Maiores que a Média\n");
    
    mostra_vetor(vetor, media);
    
    return 0;
}