//17. Escrever um programa que receba um valor inteiro do usuário e apresente o seu valor absoluto (módulo). Não utilize estrutura de decisão if.

#include <stdio.h>
#include <stdlib.h>
int main() {
  int x;
  printf("Digite um número para ver seu módulo:");
  scanf("%i", &x);
  
  printf("O módulo do número |%i| é %i", x, abs(x));
  return 0;
}
