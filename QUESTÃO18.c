/*18. Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua 
circunferência e sua  ́area. Use o valor de 3,14159 para ”pi”. Faca cada um destes cálculos dentro 
da instrução (ou instrucões) printf e use o especificador de conversão %f.*/

#include <stdio.h>
#include <math.h>
int main() {
  float r, pi = 3.14159;
  printf("Digite o raio do círculo: ");
  scanf("%f", &r);
  
  printf("O diâmetro do circulo é %.5f\n", 2 * r);

  printf("O comprimento da circunferência do circulo é %.5f\n", 2 * pi * r);

  printf("A área do circulo é %.5f\n", pi * pow(r, 2));
  
  return 0;
}
