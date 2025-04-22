/***********************
Apresentar os resultados das potências de 3,
variando do expoente 0 até o expoente 15. 
************************/

#include<stdio.h>

int main () {
	int i, j, base;
	
	printf("\nPotencias de 3");
	
	printf("\n3^0 = 1\n");
	for (i=1; i < 16; i++) {
		base = 3;
		for (j=1;j<i;j++)
			base *= 3;
		printf("3^%d = %d \n", i, base);
	}
				
	return 0;
}