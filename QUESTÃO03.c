#include <stdio.h>

int main() {
  float a;
  printf("Digite um número real:");
  scanf("%f", &a);
  printf("O número %f com apenas uma casa decimal:%.1f", a, a);
  return 0;
}
