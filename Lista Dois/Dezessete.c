/******************************************************************************

Fazer um algoritmo que leia três notas (números com casas decimais) de um
aluno e a quantidade de faltas (número inteiro) escrevendo o conceito deste
aluno e se ele foi "Aprovado" ou "Reprovado". O algoritmo deverá calcular a média
aritmética das notas e determinar o conceito a partir da tabela abaixo.
O unico conceito que reprova o alunos é o "E". Além disso, o aluno, para ser aprovado,
deverá ter no máximo cinco faltas, caso contrário o conceito será “E” e "Reprovado por Frequencia".
Média 	Conceito
[0; 6) 		E
[6; 7) 		D
[7; 8) 		C
[8; 9) 		B
[9; 10] 	A

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    int faltas;
    
    printf("Informe as tres notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("Informe o numero de faltas do aluno: ");
    scanf("%d", &faltas);
    
    media = (n1 + n2 + n3)/3;
        
    if (faltas > 5)
		printf("Conceito: E - Resultado final: Reprovado por frequencia");
	else if (media >= 9)
			printf("Conceito: A - Resultado final: Aprovado");	
		 else if (media >= 8)
			     printf("Conceito: B - Resultado final: Aprovado");
              else if (media >= 7)
					  printf("Conceito: C - Resultado final: Aprovado");
				   else if (media >= 6)
							printf("Conceito: D - Resultado final: Aprovado");
						else printf("Conceito: E - Resultado final: Reprovado");		  
    return 0;
}
