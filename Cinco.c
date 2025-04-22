/* Faça um programa que leia duas notas de uma disciplina cursada por um aluno.
O programa deve calcular e mostrar a média aritmética do aluno.*/

#include <stdio.h>

int main()
{
    float nota1, nota2;
    
    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &nota2);
    
    printf("Média do aluno: %f\n", (nota1 + nota2) / 2);

    return 0;
}