/******************************************************************************
Faça um programa que contenha uma função que receba como parâmetro uma string e
um caractere e retorne quantas vezes o caractere ocorre na string. 
*******************************************************************************/

#include <stdio.h>

int conta_letra (char palavra[], char letra){
    int cont = 0;
    for (int i=0; palavra[i]; i++) {
        if (palavra[i] == letra)
            cont++;
    }
    return cont;
}

int main()
{
    char palavra[21], letra;
    
    printf("Informe a palavra: ");
    gets(palavra);
    printf("Informe o caractere: ");
    scanf(" %c", &letra);
    printf("\nA palavra %s possui %d caracteres %c\n", palavra, conta_letra(palavra, letra), letra);
    
    return 0;
}

