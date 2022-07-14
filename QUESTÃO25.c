//25. Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos há neste tempo.
#include <stdio.h>

int main() {
  int s, h, m, si; // si = segundos iniciais
  
  printf("Digite um tempo em segundos: ");
  scanf("%i", &si);

  h = si /3600;
  m = (si % 3600) / 60;
  s = (si % 3600) % 60;

  printf("O tempo %i segundos convertido em tempo real é %ih %im %is", si, h, m, s);
    return 0;
}
