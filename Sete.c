/* Faça um programa que após a entrada de uma determinada distância entre dois
pontos (Km),e uma determinada velocidade(Km/h), digaqual o tempo médio que levará
para chegada à esse local e qual a velocidade em metros por segundos */

#include <stdio.h>

int main()
{
    float distancia, velocidade;
    
    printf("Informe a distância (km) entre dois pontos: ");
    scanf("%f", &distancia);
    printf("Informe a velocidade (km/h): ");
    scanf("%f", &velocidade);
    printf("Tempo médio da viagem em horas: %.2f\n", distancia/velocidade);
    printf("A velocidade em metros por segundo: %.2f\n", velocidade/3.6);
    //printf("A velocidade em metros por segundo: %.2f\n", velocidade*1000/3600);
    return 0;
}

