/******************************************************************************

Escrever um algoritmo que solicite a distância em km e o tempo de viagem
em horas de um automóvel e dizer se a velocidade média foi superior ao
limite de 110km/h ou não.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float distancia, tempo, velocidade;
    printf("Informe a distancia da viagem (km): ");
    scanf("%f", &distancia);
    printf("Informe o tempo da viagem (h): ");
    scanf("%f", &tempo);
    velocidade = distancia/tempo;
    
    if (velocidade >= 110)
        printf("Velocidade media = %.2f, superior ou igual ao limite de 110 km/h", velocidade);
    else printf("Velocidade media = %.2f, inferior ao limite de 110 km/h", velocidade);
            
    return 0;
}
