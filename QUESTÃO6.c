#include <stdio.h>

int main() {
  // VARIAVEIS H: ALTURA; PIH: PESO IDEAL HOMEM; PIM: PESO IDEAL MULHER
  float h, pih, pim;
  int sexo;
  printf("DIGITE A ALTURA(m):");
  scanf("%f", &h);
  printf("SEU SEXO: m[0] ou f[1]?:");
  scanf("%i", &sexo);  
  if(sexo == 0){
    pih = (72.7 * h) - 58;
    printf("SEU PESO IDEAL PARA SEXO MASCULINO É %.2fkg", pih);
  }
  if(sexo == 1){
    pih = (62.1 * h) - 44.7;
    printf("SEU PESO IDEAL PARA SEXO FEMININO É %.2fkg", pih);
  }

  return 0;
}
