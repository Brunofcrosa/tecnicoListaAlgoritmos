/******************************************************************************
Escrever um programa que lê uma matriz quadrada (máximo 10 x 10) e um valor k.
ordem da matriz é escolhida pelo usuário. A seguir use funções para: 
a)	Escrever a matriz
b)	Verificar se o valor k se encontra na matriz. Caso positivo devolva ao
programa principal a posição deste valor e escreva esta informação. Se o valor
não estiver na matriz escreva na função esta informação.
*******************************************************************************/

#include <stdio.h>
const int MAX = 10;

int valida_dimensao() {
    int tamanho;
    do {
        printf("Informe a dimensao da matriz: ");
        scanf("%d", &tamanho);
        
        if (tamanho <= 0 || tamanho > 10)
            printf("A dimensão deve ser maior que zero e menor igual dez\n");
    } while (tamanho <= 0  || tamanho > 10);
    
    return tamanho;
}

void le_matriz (int matriz[][MAX], int dim){
    for (int i=0; i < dim; i++) 
        for (int j=0; j < dim; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

void mostra_matriz (int matriz[][MAX], int dim) {
    for (int i=0; i < dim; i++){
        for (int j=0; j < dim; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
}

int procura_k(int matriz[][MAX], int k, int dim, int *linha, int *coluna) {
    int encontrou = 0;
    for (int i=0; i < dim; i++){
        for (int j=0; j < dim; j++)
            if (matriz[i][j] == k) {
                *linha = i;
                *coluna = j;
                encontrou = 1;
            }
    }
    return encontrou;
}

int main()
{
    int i, j, dim, k, linha, coluna, encontrou = 0;
    
    dim = valida_dimensao();
    
    int matriz[dim][dim];
    
    printf("\nInforme os elementos da matriz\n");
    
    le_matriz(matriz, dim);
    
    printf("\nMatriz\n");
    
    mostra_matriz(matriz, dim);
    
    printf("\nInforme o valor de k: ");
    scanf("%d", &k);

    encontrou = procura_k(matriz, k, dim, &linha, &coluna);
    
    if (encontrou == 0)
        printf("\nO valor %d nao foi encontrado na matriz", k);
    else {
        printf("\nO valor %d foi encontrado na posicao [%d, %d] da matriz", k, linha, coluna);
    }
    
    return 0;
}



