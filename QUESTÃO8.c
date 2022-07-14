#include <stdio.h>
#include <math.h>
int main() {
  int n, n2;
  printf("Digite um número inteiro:");
  scanf("%i", &n);
  n2 = pow(n, 2);
  printf("O número %i elevado a 2 é %i", n, n2);
  return 0;
}
