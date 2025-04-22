/*****************************************************
Elabore um programa em C que, receba três valores que representarão os lados de um
triângulo e verifique se os valores formam um triângulo e classifique esse triângulo
como:
Equilátero – três lados iguais;
Isósceles – dois lados iguais;
Escaleno – três lados diferentes.
Lembre-se de que, para formar um triângulo: Nenhum dos lados pode ser igual à zero,
e um lado não pode ser maior ou igual, a soma dos outros dois.
*****************************************************/

#include <stdio.h>

int main() {
	float l1, l2, l3;
	
	printf("Informe os tres lados de um triangulo: ");
	scanf("%f %f %f", &l1, &l2, &l3);
	
	if (l1 == 0 || l2 == 0 || l3 == 0 || l1 >= l2 + l3 || l2 >= l1 + l3 || l3 >= l1 + l2)
		printf("Nao eh um triangulo");
	else {
		if (l1 == l2 && l1 == l3)
			printf("Triangulo equilatero");
		else if (l1 == l2 || l1 == l3 || l2 == l3)
				printf("Triangulo isoceles");
			 else printf("Triangulo escaleno");
	}
	
	return 0;
}