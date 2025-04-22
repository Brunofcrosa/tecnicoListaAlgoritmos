/******************************************************************************

Elabore um programa  e uma função que receba três notas de um aluno e uma letra
como parâmetro. Se a letra for ‘A’, a função deve calcular a média aritmética
das notas do aluno; se a letra for ‘P’, deverá calcular a média ponderada, com
pesos 5, 3 e 2. Retorne a média calculada para o programa principal.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

float calcula_media(float nota1, float nota2, float nota3, char tipo) {
    float media;
    
    if (tipo == 'A')
        media = (nota1 + nota2 + nota3) / 3.0;
    else media = (nota1 * 0.5 + nota2 * 0.3 + nota3 * 0.2);
    
    return media;
}

int main()
{
    float nota1, nota2, nota3, media;
    char tipo;
    
    system("clear");
    
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    
    do {
        printf("Informe o tipo de média: (A) aritmética ou (P) ponderada: ");
        scanf(" %c", &tipo);
        tipo = toupper(tipo);
        if (tipo != 'A' && tipo != 'P')
            printf("Tipo inválido! Favor informar novamente!\n");
    } while (tipo != 'A' && tipo != 'P');
    
    printf("Média final: %.1f", calcula_media(nota1, nota2, nota3, tipo));

    return 0;
}