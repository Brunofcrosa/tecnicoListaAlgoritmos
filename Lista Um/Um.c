/*Faça um programa que tenha duas variáveis inteiras, preencha com um valor e apresente
na tela:
O valor das duas variáveis;
A soma dos valores;
A diferença dos valores; 
*/

#include <stdio.h>

int
main ()
{
  int a, b;

  a = 10;
  b = 15;

  printf ("Valor de A: %d\n", a);
  printf ("Valor de B: %d\n", b);

  printf ("Soma: %d\n", a + b);
  printf ("Diferença: %d\n", a - b);

  return 0;
}
