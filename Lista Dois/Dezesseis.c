/******************************************************************************

Fazer um algoritmo que leia valores para as variáveis hora, minutos e
segundos; verificando e escrevendo se elas correspondem a um horário válido
ou não. Para um horário ser válido, a hora deve estar no intervalo de 0 a 23,
os minutos e os segundos no intervalo de 0 a 59.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int hora, minuto, segundo;
    
    printf("Informe os valores de um horario\n");
    
    printf("Hora: ");
    scanf("%d", &hora);
    printf("Minuto: ");
    scanf("%d", &minuto);
	printf("Segundo: ");
    scanf("%d", &segundo);
	     
    if (!(hora > -1 && hora < 24))
		printf("O valor da hora eh invalido! A hora deve estar no intervalo de 0 a 23");
	else if (!(minuto > -1 && minuto < 60))
			printf("O valor dos minutos eh invalido! Os minutos devem estar no intervalo de 0 a 59");
		 else if (!(segundo > -1 && segundo < 60))
				 printf("O valor dos segundos eh invalido! Os segundos devem estar no intervalo de 0 a 59");
              else printf("A hora %d:%d:%d eh valida", hora, minuto, segundo);
    return 0;
}
