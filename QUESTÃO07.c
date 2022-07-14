#include <stdio.h>

int main() {
  int h, m, s, ts; // ts = total de segundos
  printf("NESTE PROGRAMA SERÁ CONVERTIDO VALORES DE HORAS, MINUTOS E SEGUNDOS EM SEGUNDOS\n");
  printf("Digite uma quantidade de horas:");
  scanf("%i", &h);
  printf("Digite uma quantidade de minutos:");
  scanf("%i", &m);
  printf("Digite uma quantidade de segundos:");
  scanf("%i", &s);
  h = h * 3600;
  m = m * 60;
  ts = h + m + s;
  printf("A quantidade digitada convertida para segundos é %iS", ts);
  return 0;
}
