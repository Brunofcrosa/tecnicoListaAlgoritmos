/**************************************************
Faça um programa que leia o tempo de duração de um evento em uma fábrica
expressa em segundos e mostre-o expresso em horas, minutos e segundos.
***************************************************/

#include <stdio.h>

int main () {
	int horas, minutos, segundos;
	
	printf("Informe o tempo em segundos do evento: ");
	scanf("%d", &segundos);
	
	horas = segundos / 3600;
	
	minutos = segundos % 3600 / 60;
	
	segundos = segundos % 60;
	
	printf("Horas: %d\n", horas);
	
	printf("Minutos: %d\n", minutos);
		
	printf("Segundos: %d\n", segundos);
	
	return 0;
}