/*14. Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus Fahrenheit. 
A fórmula de versão ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main() {
  int c, f;
  printf("Digite a temperatura em graus Celsios que deseja converter paraFahrenheit:");
  scanf("%i", &c);
  f = (9 * c + 160) / 5;
  printf("O valor %i°C convertido para Fahrenheit é %i°F", c, f);
  return 0;
}
