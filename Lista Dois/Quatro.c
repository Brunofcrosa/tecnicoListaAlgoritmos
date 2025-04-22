/******************************************************************************

Ler a temperatura de uma pessoa doente e mostrar uma mensagem “ESTÁ
COM FEBRE” ou “Não está com febre” considerando o valor base de 37.5ºC.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temperatura;
    printf("Informe a temperatura (Celsius): ");
    scanf("%f", &temperatura);
        
    if (temperatura >= 37.5)
        printf("ESTA COM FEBRE - temperatura %.2f", temperatura);
    else printf("Nao0 esta com febre - temperatura %.2f", temperatura);
            
    return 0;
}
