/*15. Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o número de dias trabalhados 
pelo vendedor e imprima o valor líquido a ser pago ao mesmo, sabendo que se ele trabalhou até 10 dias não tem direito 
á gratificação, se ele trabalhou acima de 10 dias e até 20 dias tem direito á gratificação de 20%, se ele trabalhou acima 
de 20 dias tem direito á gratificação de 30%. Sempre são descontados 10% de imposto de renda em cima do valor bruto.*/

#include <stdio.h>

int main() {
  int d; float vl, vt;
  printf("Digite o número de dias que o vendedor trabalhou:");
  scanf("%i", &d);

  
  if (d >= 1 && d < 11) //até 10 dias de trabalho
  {
    vl = (50.25 * d) - (0.1 * 50.25 * d);
    printf("O vendedor trabalhou por %i dias, portanto não tem direito a gratificação e o valor que deverá ser pago é de R$%.2f", d, vl);
  }

  
  if (d > 10 && d < 21) // de 11 dias a 20 dias de trabalho
  {
    vl = ((50.25 * d) + (0.2 * 50.25 * d));
    vt = vl - (0.1 * vl);
    printf("O vendedor trabalhou por %i dias, portanto tem direito a gratificação de 20%% e o valor que deverá ser pago é de R$%.2f", d, vt);
  }

  
  if (d > 20) //acima de 20 dias de trabalho
  {
    vl = (50.25 * d) + (0.3 * 50.25 * d);
    vt = vl - (0.1 * vl);
    printf("O vendedor trabalhou por %i dias, portanto tem direito a gratificação de 30%% e o valor que deverá ser pago é de R$%.2f", d, vt);
  }
  
  return 0;
}
