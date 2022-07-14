//24. Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n. Obs: Utilize operadores binários.
#include <stdio.h>
#include <math.h>
int main() {
  int x, n, v;
  
  printf("Digite um número: ");
  scanf("%i", &x);
  printf("Digite um valor para o expoente de 2: ");
  scanf("%i", &n);
  
  v = x * pow(2,n);
  printf("O número %i multiplicado por (2 elevado a %i) é %i", x, n, v);
  
    return 0;
}
