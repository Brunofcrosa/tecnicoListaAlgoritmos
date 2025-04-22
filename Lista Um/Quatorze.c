/*Elabore um algoritmo que leia o tamanho do lado de um quadrado e informe a área
e o perímetro do quadrado. (Perímetro = 4 * L; área = L*L).*/

#include <stdio.h>

int main()
{
    float lado;
    printf("Informe o tamanho do lado do quadrado: ");
    scanf("%f", &lado);
    printf("Perímetro do quadrado: %.2f\n", lado * 4);
    printf("Área do quadrado: %.2f", lado * lado);
    return 0;
}

