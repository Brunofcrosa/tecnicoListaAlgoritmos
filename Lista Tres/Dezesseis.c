/***********************
Faça um algoritmo para que um usuário adivinhe um número informado por outro.
Inicialmente um usuário fornece um número para o algoritmo, e depois o outro
usuário deve informar números até acertar (obviamente o segundo usuário não
tem acesso a qual número foi digitado pelo primeiro usuário). Para ajudá-lo
a descobrir, a cada tentativa o computador deve exibir uma mensagem do tipo
“O número é menor” quando o número do segundo usuário for maior que o do primeiro
e uma mensagem do tipo “O número é maior” quando o segundo usuário digitar um
número menor. Ao acertar, o programa deve mostrar uma mensagem apropriada e
também mostrar o número de tentativas utilizadas. 


************************/

#include<stdio.h>

int main () {
	int escolhido, adivinho, tentativas=0;
	
	printf("Informe um numero: ");
	scanf("%d", &escolhido);
	
	do {
		printf("\nInforme o numero que deve ser descoberto: ");
		scanf("%d", &adivinho);
		tentativas++;
		if (adivinho == escolhido)
			printf("\nPARABENS! Voce descobriu o numero %d com %d tentativa(s)", escolhido, tentativas);		
		else if (adivinho > escolhido)
				printf("O numero eh menor");		
			 else printf("O numero eh maior");		
	} while (adivinho != escolhido);
	
	return 0;
}