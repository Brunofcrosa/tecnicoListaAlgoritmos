/******************************************************************************

Um professor resolveu considerar, para cálculo da média aritmética final do
semestre, somente as três maiores notas das quatro provas realizadas pelos
alunos. Para auxiliá-lo, deve-se fazer um algoritmo que leia as quatro notas
de um aluno e escreva a média aritmética considerando apenas as suas três
maiores notas.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, media;
    
    printf("Informe as quatro notas do aluno: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        
    if (n1 < n2 && n1 < n3 && n1 < n4)
		media = (n2 + n3 + n4)/3;
	else if (n2 < n3 && n2 < n4)
			media = (n1 + n3 + n4)/3;
    	 else if (n3 < n4)
			     media = (n1 + n2 + n4)/3;
			  else media = (n1 + n2 + n3)/3;
			 
	printf("Media do aluno: %.2f", media);
            
    return 0;
}
