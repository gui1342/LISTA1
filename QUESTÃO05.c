#include <stdio.h>

int main() {
  float conta, total_conta, taxa = 0.10;
  printf("DIGITE O VALOR DA CONTA PARA ACRESCENTAR 10 POR CENTO:");
  scanf("%f", &conta);
  total_conta = (conta * taxa) + conta;
  printf("O VALOR TOTAL COM A TAXA É R$%.2f", total_conta);
  return 0;
}
