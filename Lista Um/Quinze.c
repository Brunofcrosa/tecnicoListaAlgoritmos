/* Faça um programa que leia uma determinada distância (km) percorrida em
uma viagem, o consumo médio do veículo (km/l) e o tempo em horas da
viagem. O programa deve apresentar os valores da velocidade média e a
quantidade de litros de combustível utilizada na viagem. */

#include <stdio.h>

int main()
{
    float distancia, tempo, consumo;
    
    printf("Informe a distância (km) entre dois pontos: ");
    scanf("%f", &distancia);
    printf("Informe o consumo medio do veiculo (km/l): ");
    scanf("%f", &consumo);
    printf("Informe o tempo em horas da viagem: ");
    scanf("%f", &tempo);
    printf("Velocidade media da viagem (km/h)): %.2f\n", distancia/tempo);
    printf("Quantidade de combustivel utilizada (l): %.2f\n", distancia/consumo);
    
    return 0;
}

