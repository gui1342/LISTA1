/*27. Escreva um programa que solicite 3 números em ponto flutuante e imprima a média aritmética e 
geométrica. (Utilize a função pow(base, expoente) da biblioteca math.h)*/

#include <stdio.h>
#include <math.h>
int main() {
  float x1, x2, x3, ma, mg; 
  
  printf("Digite um número decimal: ");
  scanf("%f", &x1);
  printf("Digite mais um número decimal: ");
  scanf("%f", &x2);

  printf("mais um: ");
  scanf("%f", &x3);

  ma = (x1 + x2 + x3) / 3;
  mg = pow(x1 * x2 * x3, 1/3);
  printf("A média aritmica é %.2f\n", ma);
  printf("A média geométrica é %f", mg);

    return 0;
}
