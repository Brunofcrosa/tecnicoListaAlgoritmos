/******************************************************************************

Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes
de uma equação do segundo grau e retorne ao programa principal o valor do delta,
que é dado por: b² - 4ac.

*******************************************************************************/
#include <stdio.h>

float calcula_delta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

int main()
{
    float a, b, c;

    system("clear");
    
    printf("Informe o valor de A: ");
    scanf("%f", &a);
    printf("Informe o valor de B: ");
    scanf("%f", &b);
    printf("Informe o valor de C: ");
    scanf("%f", &c);    
    
    printf("Delta: %.1f", calcula_delta(a, b, c));

    return 0;
}
