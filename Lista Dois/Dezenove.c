/******************************************************************************

O índice de massa corporal (IMC) e calculado dividindo-se o peso de uma
pessoa pela sua altura ao quadrado. A partir do valor de IMC podemos
classificar a pessoa quanto ao peso conforme os intervalos apresentados a
seguir (revista Galileu nov. 2004):
IMC 		Classificação
[0; 18,5) 	Abaixo do peso
[18,5; 25) 	Normal
[25; 30) 	Pré-obeso
[30; 35) 	Obeso classe I
[35; 40) 	Obeso classe II
[40; ∞) 	Obeso classe III

Fazer um algoritmo que leia o peso e a altura de uma pessoa, escrevendo a
classificação desta pessoa.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Informe a altura da pessoa: ");
    scanf("%f", &altura);
    
    printf("Informe o peso da pessoa: ");
    scanf("%f", &peso);
    
    imc = peso / (altura * altura);
    
    printf("IMC: %.2f", imc);
	
	if (imc < 18.5)
		printf("\nAbaixo do peso");
	else if (imc < 25)
			 printf("\nNormal");
		 else if (imc < 30)
				  printf("\nAcima do peso");
			  else if (imc < 35)
					   printf("\nObeso Classe I");
				   else if (imc < 40)
					   		printf("\nObeso Classe II");
					   else printf("\nObeso Classe III");	  	 
	  	 				  
    return 0;
}
