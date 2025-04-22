/******************************************************************************
Escreva um programa para ler o número de lados de um polígono regular e a
medida do lado (em cm). Faça  uma função que receba como parâmetro o número
de lados e a medida do lado deste polígono e calcule e imprima o seguinte: 
- Se o número de lados for igual a 3, escrever TRIÂNGULO e o valor da sua area.
- Se o número de lados for igual a 4, escrever QUADRADO e o valor da sua área.
- Se o número de lados for igual a 5, escrever PENTÁGONO. 
Observação:  Considere que o usuário só informará os valores 3, 4 ou 5. 
*******************************************************************************/

#include <stdio.h>

float area (int lados, float medida){
	float p;
	if (lados == 3){
		p = (medida+medida+medida)/2;
		return sqrt(p*((p-medida)*(p-medida)*(p-medida)));
	} else if (lados == 4)
			   return medida*medida;
	return (5*medida*medida)/(4*sqrt(5-2*sqrt(5)));
}

int main(){
	float medida;
	int lados;
	printf("Informe a medida do lado do poligono: ");
	scanf("%f", &medida);
	do {
		printf("\nInforme o numero de lados do poligono: ");
		scanf("%d", &lados);
		
		if (lados != 3 && lados != 4 && lados != 5)
			printf("\nAtencao! Os lados aceitos sao 3, 4 e 5");
		
	} while (lados != 3 && lados != 4 && lados != 5);
	
	if (lados == 3)
		printf("\nTriangulo");
	else if (lados == 4)
		printf("\nRetangulo");
	else printf("\nPoligono");
	
	printf("\nArea = %.2f", area(lados, medida));
	
	
    return 0;
}

