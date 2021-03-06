/*26. Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância 
entre os dois pontos no plano. (Utilize a função sqrt (número), biblioteca math.h).*/

#include <stdio.h>
#include <math.h>
int main() {
  float d, x1, x2, y1, y2; 
  
  printf("Digite a coordenada x do ponto 1: ");
  scanf("%f", &x1);
  printf("Digite a coordenada x do ponto 2: ");
  scanf("%f", &x2);

  printf("Digite a coordenada y do ponto 1: ");
  scanf("%f", &y1);
  printf("Digite a coordenada y do ponto 2: ");
  scanf("%f", &y2);

  d = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

  printf("A distância entre os dois pontos do plano é %.2f", d);
    return 0;
}
