/******************************************************************************

Fazer um algoritmo que calcule o salário líquido de um funcionário a partir do
numero de horas trabalhadas, do valor que recebe por hora, da sua idade
(anos) e do tempo de serviço (anos). O algoritmo deverá ler essas
informações e calcular o salário líquido do funcionário de acordo com as
seguintes regras:
a. O salário bruto é calculado multiplicando-se o número de horas
trabalhadas pelo valor recebido por hora.
b. A empresa paga 2% adicional na modalidade de triênio, ou seja, 2%
adicional para cada três anos de tempo de serviço completados. Ex:11
anos de tempo de serviço (3 triênios) = 6% adicional sobre salário
bruto.
c. Caso a idade do funcionário não for inferior a 40 anos, terá direito a
um adicional de 1,5% do salário bruto.
d. Calcule o INSS considerando 8,5% do salário bruto mais adicionais
(a+b+c).
Calcule o imposto de renda (IR) sobre o salário bruto mais adicionais
menos INSS (a+b+c-d) conforme tabela abaixo:
Faixa de rendimento		Alíquota 		Dedução
[0; 1.434,00] 			0% (isento) 	-
(1.434,00; 2.150,00] 	7,50% 			107,55
(2.150,00; 2.866,00] 	15,00%			268,80
(2.866,00; 3.582,00] 	22,50% 			483,75
(3.582,00; ∞]			27,50% 			662,85
f. Calcule o salário líquido somando o salário bruto aos adicionais e
descontando o INSS e o imposto de renda.
Exemplo:
Funcionário com 160 horas trabalhadas; recebe 15,00 / hora; 43 anos de
idade; 7 anos de tempo de serviço.
Salário líquido calculado: 2238,07
Salário bruto = 160 * 15,00 = 2400,00
Adicional de 4% (2 triênios) = 2400,00 * 4% = 96,00
Adicional de 1,5% (40 anos ou mais) = 2400,00 * 1,5% = 36,00
INSS = (2400,00 + 96,00 + 36,00) = 2532,00 * 8,5% = 215,22
IR = (2400,00 + 96,00 + 36,00 - 215,22) = 2316,78 * 15,00 - 268,80 = 78,71
Salário líquido = 2400,00 + 96,00 + 36,00 -215,22 - 78,71 = 2238,07


*******************************************************************************/
#include <stdio.h>

int main()
{
    float nro_horas, valor_hora, sal_bruto, ad_tmp, ad_idade, inss, rendimentos, ir, sal_liquido;
    int idade, anos, trienio;
    
    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &nro_horas);
    
    printf("Informe o valor da hora: ");
    scanf("%f", &valor_hora);
    
    sal_bruto = nro_horas * valor_hora;
    
    printf("Informe o tempo de servico (anos) na empresa: ");
    scanf("%d", &anos);
    
    trienio = anos/3;
      
    ad_tmp = sal_bruto * (0.02 * trienio);
    
    printf("Informe a idade do funcionario: ");
    scanf("%d", &idade);
    
    printf("\nSalario Horas Trabalhadas: %.2f\n", sal_bruto);
        
    if (idade >= 40)
		ad_idade = sal_bruto * 0.015;
		
	sal_bruto += ad_tmp + ad_idade;
	
	inss = sal_bruto * 0.085;
	
	rendimentos = sal_bruto - inss;
	
	if (rendimentos <= 1434)
		ir = 0;
	else if (rendimentos <= 2150)
			ir = rendimentos * 0.075 - 107.55;
		 else if (rendimentos <= 2866)
				 ir = rendimentos * 0.15 - 268.8;
			  else if (rendimentos <= 3582)
					  ir = rendimentos * 0.225 - 483.75;
					else ir = rendimentos * 0.275 - 662.85;
					
	
	printf("\nAdicional idade: %.2f\n", ad_idade);
	printf("\nAdicional tempo servico: %.2f\n", ad_tmp);
	printf("\nSalario Bruto: %.2f\n", sal_bruto);
	printf("\nInss: %.2f\n", inss);
	printf("\nImposto de renda: %.2f\n", ir);
	printf("\nTotal de descontos: %.2f\n", inss + ir);
	printf("\nSalario Liquido: %.2f\n", sal_bruto - inss - ir);
	  	 				  
    return 0;
}
