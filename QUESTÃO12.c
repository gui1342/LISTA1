//12. Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.

#include <stdio.h>

int main() {
  int n1, n2, s, p, d, q, r;
  printf("Digite um número:");
  scanf("%i", &n1);
  printf("Digite mais um número:");
  scanf("%i", &n2);
  s = n1 + n2; p = n1 * n2; d = n1 - n2; q = n1 / n2; r = n1 % n2;
  printf("A soma de %i e %i é %i\nO produto de %i e %i é %i\nA diferença entre %i e %i é %i\nO quociente entre %i e %i é %i\nO resto da divisão de %i por %i é %i", n1, n2, s, n1, n2, p, n1, n2 , d, n1, n2, q, n1, n2, r);
  return 0;
}
