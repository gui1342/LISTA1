//9. Escreva um programa que leia um valor numérico inteiro e apresente como resultado os seus valores sucessor e antecessor.

#include <stdio.h>

int main() {
  int n, na, ns; // na = antecessor, ns = sucessor
  printf("Digite um número inteiro para ver seu antecessor e sucessor:");
  scanf("%i", &n);
  na = n - 1;
  ns = n + 1;
  printf("O antecessor de %i é %i, e o sucessor é %i", n, na, ns);
  return 0;
}
