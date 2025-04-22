/******************************************************************************

Leia um número inteiro e a seguir verifique se o número corresponde a um mês
válido no calendário e escreva o nome do mês, senão escreva ‘mês inválido’.
Utilize o comando switch-case-default.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes;
    printf("Informe o mês: ");
    scanf("%d", &mes);
    
    switch (mes){
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Março");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Mês inválido!");
    }

    return 0;
}
