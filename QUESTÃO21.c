//21. Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro ́e múltiplo do segundo. Obs: Não utilizar estrutura de decisão if.

#include <stdio.h>

int main() {
  int x, y;
  printf("Digite um número inteiro: ");
  scanf("%i", &x);

  printf("Digite outro número inteiro: ");
  scanf("%i", &y);
  
  int i = 0;
  int j = 0;
  while (i == 0) {

    for (j = 0; x % y == 0; j++){ //saber se é múltiplo
      printf("O número %i é multiplo de %i", x, y);
      break;
      }
    
    for (j = 0; x % y != 0; j++){ //não é multiplo
      printf("O número %i não é múltiplo de %i", x, y);
      break;
      }
    i ++; j++;
  }
  
  return 0;
}
