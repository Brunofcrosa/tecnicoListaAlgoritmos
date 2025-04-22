/* Em uma eleição sindical concorreram ao cargo de presidente três candidatos
(A, B e C). Durante a apuração dos votos foram computados votos nulos e
votos em branco, além dos votos válidos para cada candidato. Deve ser
criado um programa de computador que faça a leitura da quantidade de votos
nulos e votos em branco. Ao final o programa deve apresentar:
a. O número total de eleitores, considerando votos válidos, nulos e em
branco;
b. O percentual correspondente de votos válidos em relação à
quantidade de eleitores;
c. O percentual correspondente de votos válidos do candidato A em
relação à quantidade de eleitores;
d. O percentual correspondente de votos válidos do candidato B em
relação à quantidade de eleitores;
e. O percentual correspondente de votos válidos do candidato C em
relação à quantidade de eleitores;
f. O percentual correspondente de votos nulos em relação à quantidade
de eleitores e,
g. O percentual correspondente de votos em branco em relação à
quantidade de eleitores. */

#include <stdio.h>

int main()
{
    int nulos, brancos, validos_A, validos_B, validos_C;
	float total;
    
    printf("Informe o numero de votos validos do candidato A: ");
    scanf("%d", &validos_A);
    printf("Informe o numero de votos validos do candidato B: ");
    scanf("%d", &validos_B);
    printf("Informe o numero de votos validos do candidato C: ");
    scanf("%d", &validos_C);
    printf("Informe o numero de votos brancos: ");
    scanf("%d", &brancos);
    printf("Informe o numero de votos nulos: ");
    scanf("%d", &nulos);
    total = validos_A + validos_B + validos_C + brancos + nulos;
    printf("\nNumero total de eleitores: %.0f", total);
    printf("\nPercentual de votos validos: %.2f", (validos_A + validos_B + validos_C)*100/total);
    printf("\nPercentual de votos validos do candidato A: %.2f", validos_A * 100/total);
    printf("\nPercentual de votos validos do candidato B: %.2f", validos_B * 100/total);
    printf("\nPercentual de votos validos do candidato C: %.2f", validos_C * 100/total);
    printf("\nPercentual de votos nulos: %.2f", nulos * 100/total);
    printf("\nPercentual de votos brancos: %.2f", brancos * 100/total);
        
    return 0;
}

