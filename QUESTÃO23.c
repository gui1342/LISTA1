/*23. Escreva um programa que receba a entrada de um número de três dígitos, separe o número em seus dígitos 
componentes e reconstrua um número com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.*/
#include <stdio.h>

int main() {
  char lista[100];
int x;
int i;
printf("Digite um número inteiro de 3 dígitos: ");
scanf("%i", &x);
sprintf(lista,"%d",x);

for(i=0;i<strlen(lista);++i)
 //printf("%c ",lista[i]);
for(i = 0; i<strlen(lista);++i){
  
}
  
printf("o numero %i invertido fica %c%c%c", x, lista[2], lista[1], lista[0]);

  return 0;
}
