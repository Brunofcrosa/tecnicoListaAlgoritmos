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
    
    ano = 2023 - ano;
    
    if (ano < 12)
        printf("Criança");
    else if (ano < 18)
            printf("Adolescente");
         else if (ano < 25)
                 printf("Jovem");
        	  else if (ano < 64)
        			  printf("Adulto");
                    else printf("Idoso");
    
    return 0;
}

