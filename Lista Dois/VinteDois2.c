/******************************************************************************

Determine e informe a faixa etária de uma pessoa, a partir do seu ano de nascimento
e do ano atual. Faixas:
- 0 a 11 anos: criança
- 12 a 17 anos: adolescente
- 18 a 25 anos: jovem
- 26 a 64 anos: adulto
- 65 em diante: idoso

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano;
    
    printf("Informe seu ano de nascimento: ");
    scanf("%d", &ano);
    
    switch (2021 - ano){
        case 0 ... 11:
            printf("Criança");
            break;
        case 12 ... 17:
            printf("Adolescente");
            break;
        case 18 ... 25:
            printf("Jovem");
            break;
        case 26 ... 64:
            printf("Adulto");
            break;
        default:
            printf("Idoso");
    }
    
    return 0;
}

