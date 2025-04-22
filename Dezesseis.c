/* Ler quatro valores numéricos inteiros e apresentar o resultado das adições e
das multiplicações utilizando a propriedade distributiva para a máxima
combinação possível entre as quatro variáveis. Por exemplo, considerando o
uso das variáveis A, B, C e D, devem ser feitas seis adições e seis
multiplicações, ou seja, deve ser combinada a variável A com B, A com C e A
com D. Depois é necessário combinar a variável B com a C e a B com a D.
Por último, combine C com D. */

#include <stdio.h>

int main()
{
    int A, B, C, D;
    
    printf("Informe quatro valores inteiros: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    printf("\nResultado das adicoes: %d", (A+B)+(A+C)+(A+D)+(B+C)+(B+D)+(C+D));
    printf("\nResultado das multiplicacoes: %d", (A*B)*(A*C)*(A*D)*(B*C)*(B*D)+(C*D));
    
    return 0;
}

