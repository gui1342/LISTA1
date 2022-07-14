/*16.Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa, 
É necessário possuir alguns dados, tais como o valor da hora aula, número de horas trabalhadas no mês e 
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salário bruto para fazer o 
desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario liquido do professor.*/

#include <stdio.h>

int main() {
  int htm, inss; float sl, sb, vha;
  /*           índice das variáveis
  htm = horas trabalhadas por mês
  vha = valor da hora aula
  inss = percentual de desconto inss
  sl = salario liquido
  sb = salario bruto
  */
  printf("Digite o valor da hora aula(R$):");
  scanf("%f", &vha);
  
  printf("Digite o número de horas trabalhadas no mês:");
  scanf("%i", &htm);

  printf("Digite o percentual de desconto do INSS(%%):");
  scanf("%i", &inss);

  sb = vha * htm; // salario bruto sem descontar INSS

  printf("O salário bruto é R$%.2f\n", sb);

  sl = sb - (inss * sb / 100); // salario liquido com desconto do INSS
  
  printf("O salário líquido com desconto de %i%% do INSS é R$%.2f", inss, sl);
  
  return 0;
}
