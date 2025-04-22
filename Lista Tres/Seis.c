/***********************
Uma empresa deseja efetuar uma pesquisa de ibope sobre a aceitação de um certo
produto lançado no mercado. Para isto, encomendou uma pesquisa a ser realizada sobre o
produto aplicada a 20 pessoas, onde cada pessoa responderá o seguinte:
● Seu sexo (f - feminino, m - masculino);
● Sua resposta (1-sim, 2-não).
Faça um programa em C que mostre o resultado dos seguintes cálculos:
a) Total de pessoas que responderam sim;
b) Total de pessoas que responderam não;
c) A porcentagem de pessoas do sexo feminino que responderam sim;
d) A porcentagem de pessoas do sexo masculino que responderam não.
************************/

#include<stdio.h>

int main () {
	int i, resp, sim=0, nao=0, f_sim=0, m_nao=0;
	char sexo;
		
	for (i=0; i < 20; i++){
		printf("Informe o sexo da pessoa [f] Feminino e [m] Masculino: ");
		scanf(" %c", &sexo);
		
		printf("Informe a resposta [1] sim [2] não: ");
		scanf("%d", &resp);
		
		if (resp == 1)
			sim += 1;
		else nao +=1;	
				
		if (sexo == 'f' && resp == 1)
			f_sim++;
		else if (sexo == 'm' && resp == 2)
				m_nao++;
	}
	
	printf("\nTotal de pessoas que responderam sim: %d", sim);
	printf("\nTotal de pessoas que responderam nao: %d", nao);
	printf("\nPercentagem de pessoas do sexo feminino que responderam sim: %.2f%%", (float)f_sim/20*100);
	printf("\nPercentagem de pessoas do sexo masculino que responderam nao: %.2f%%", (float)m_nao/20*100);
		
	return 0;
}