//20. Escreva um programa que receba um número inteiro e então determine e imprima se ele é par ou ́ımpar. Obs: não utilizar estrutura de decisão if.

#include <stdio.h>

int main() {
  int x;
  printf("Digite um número inteiro: ");
  scanf("%i", &x);

  int i = 0;
  int j = 0;
  while (i == 0) {

    for (j = 0; x % 2 == 0; j++){ //saber se é par
      printf("O número %i é par", x);
      break;
      }
    for (j = 0; x % 2 != 0; j++){ //saber se é ímpar
      printf("O número %i é ímpar", x);
      break;
      }
    i ++; j++;
  }
  
  return 0;
}
