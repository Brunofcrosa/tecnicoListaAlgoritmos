/******************************************************************************

A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes.
Faça um algoritmos para coletar dados sobre o salário e número de filhos de
cada habitante e após as leituras, escrever:
a) Média de salário da população
b) Média do número de filhos
c) Número de filhos do habitante com menor salário. (Supor que não haja empate)
d) Percentual de pessoas com salário menor que R$ 150,00 Obs.:
O final da leitura dos dados se dará com a entrada de um “salário negativo”

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario, menor_salario, soma_salario=0.0, media_salario, media_filhos;
    int filhos, filhos_menor, soma_filhos=0, cont_1500=0, habitantes;
    
    printf("Informe o salário: ");
    scanf("%f", &salario);
    menor_salario = salario;
    
    printf("Informe o número de filhos: ");
    scanf("%d", &filhos);
    filhos_menor = filhos;
            
    while (salario >= 0) {
        soma_salario += salario;
        soma_filhos += filhos;
        habitantes++;
        
        if (salario < menor_salario) {
            menor_salario = salario;
            filhos_menor = filhos;
        }
        
        if (salario < 1500)
            cont_1500++;
        
        printf("Informe o salário: ");
        scanf("%f", &salario);
        
        if (salario >= 0) {
            printf("Informe o número de filhos: ");
            scanf("%d", &filhos);
        }
    }
    
    printf("\nMédia de salário da população: %.2f", soma_salario / habitantes);
    printf("\nMédia do número de filhos: %.2f", (float) soma_filhos / habitantes);
    printf("\nNúmero de filhos do habitante com menor salário: %d", filhos_menor);
    printf("\nPercentual de pessoas com salário menor que R$ 150,00: %.2f", (float) cont_1500 * 100 / habitantes);
    
    return 0;
}



