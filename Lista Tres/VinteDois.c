/*************************************************************************
Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10
metros e cresce 3 centímetros por ano. Faça um programa em C que calcule
e mostre quantos anos serão necessários para que Zé seja maior que Chico
*************************************************************************/

#include <stdio.h>

int main() {
	float chico = 150, ze = 110;
	int anos = 0;
		
	while (chico > ze) {
		chico += 2;
		ze += 3;
		anos++;
		}
			
	printf ("\nSerao necessarios %d anos para que Ze seja maior que Chico", anos);
	
	return 0;
}