/******************************************************************************
Preencher um vetor com 5 nomes com 20 letras no máximo . Imprimir os Nomes.
A seguir ler um número que o usuário digitar que indica a posição do nome
(entre 0 e 4) e, a seguir, passe os nomes e este numero para uma função que 
verifica quantas letras “a” ou “A” existem no nome. Se não existir escreva:
“Letra não existente”. Fazer a validação do número digitado pelo usuário.
*******************************************************************************/

#include <stdio.h>
const int MAX = 5;

void le_vetor(char nomes[][21]){
    
    for (int i=0; i < MAX; i++) {
        printf("Nome: ");
        gets(nomes[i]);
    }
}

void mostra_nomes (char nomes[][21]) {
    for (int i=0; i < MAX; i++)
        printf("%s\n", nomes[i]);
}

int le_posicao() {
    int posicao;
    
    do {
        printf("\nInforme a posicao: ");
        scanf("%d", &posicao);
        if (posicao < 0 || posicao > 4)
            printf("\nPosicao invalida!\n");
    } while (posicao < 0 || posicao > 4);
    
    return posicao;
}

int verifica_letra(char nome[], char letra){
    int cont = 0;
    for (int i = 0; nome[i]; i++)
        if (nome[i] == letra || nome[i] == toupper(letra))
            cont++;
    return cont;
}

int main()
{
    int posicao, cont;
    char nomes[MAX][21], letra;
    
    system("clear");
    
    printf("Informe os nomes\n");
    
    le_vetor(nomes);
    
    printf("\nNomes cadastrados\n");
    
    mostra_nomes(nomes);
    
    posicao = le_posicao();
    
    printf("Informe a letra: ");
    scanf(" %c", &letra);
    
    cont = verifica_letra(nomes[posicao], letra);
    
    if (cont == 0)
        printf("Letra %c nao encontrada no nome %s", letra, nomes[posicao]);
    else printf("Letra %c encontrada %d vezes no nome %s", letra, cont, nomes[posicao]);
    
    return 0;
}

