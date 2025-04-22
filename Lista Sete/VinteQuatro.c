/******************************************************************************
Faça um programa que conta o número de caracteres maiúsculos em uma frase
qualquer fornecida pelo usuário (diversas frases poderão ser lidas). Leia a
frase no programa principal, passe como parâmetro para uma função, que deverá
contar e retornar o resultado. 
Exemplo: 
Entre com uma frase qualquer : O rato ROEU a Roupa do Rei de Roma 
Esta frase contém 7 caracteres maiúsculos. 
Deseja entrar com outra frase (s/n) n
*******************************************************************************/

#include <stdio.h>

int conta_maiusculas (char palavra[]){
    int cont = 0;
    for (int i=0; palavra[i]; i++) {
        if (palavra[i] != ' ' && palavra[i] == toupper(palavra[i]))
            cont++;
    }
    return cont;
}

int main()
{
    char frase[201], resp;
    int maiusculas;
    
    do {
        system("clear");
        printf("Informe a frase: ");
        gets(frase);
        printf("\nA frase possui %d caracteres maiúsculos\n", conta_maiusculas(frase));
        printf("\nDeseja entrar com outra frase? (S/N)");
        scanf(" %c", &resp);
        __fpurge(stdin);
        resp = toupper(resp);
    } while (resp == 'S');
    
    return 0;
}

