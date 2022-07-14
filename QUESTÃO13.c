//13. Escreva um programa que leia duas variáveis A e B e efetue a troca dos valores. O objetivo é que a variável A passe a conter o valor de B e a variável B passe a possuir o valor de A. Apresente os valores após a efetivação do processamento da troca.

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite um número para A:");
  scanf("%i", &a);
  printf("Digite um número para B:");
  scanf("%i", &b);
  c = a; a = b;
  printf("Os valores antes da troca: A = %i e B = %i\nOs valores após a troca: A = %i e B = %i", c, a, a, c);
  return 0;
}
