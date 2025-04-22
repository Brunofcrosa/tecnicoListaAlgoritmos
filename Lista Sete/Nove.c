/******************************************************************************
Escreva uma função que recebe a idade de uma pessoa em anos, meses e dias e 
retorna essa idade expressa em dias. Leve em consideração que todos os meses
possuem 30 dias
*******************************************************************************/

#include <stdio.h>

int idade_dias (int anos, int meses, int dias){
    return anos * 365 + meses * 30 + dias;
}

int main()
{
    int anos, meses, dias;
    
    printf("Informe a idade da pessoa em:\n");
    printf("\nAnos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);
    
    printf("\nIdade da pessoa em dias: %d\n", idade_dias(anos, meses, dias));
    
    return 0;
}

