/*22.A linguagem C pode representar letras maiúsculas, letras minúsculas e uma grande variedade de símbolos especiais. 
O C usa internamente pequenos inteiros para representar cada caractere diferente. O conjunto de caracteres que um computador 
utiliza e as representações dos números inteiros correspondentes àqueles caracteres ́e chamado conjunto de caracteres do computador. 
Você pode imprimir o número inteiro equivalente à letra maiúscula A, por exemplo, executando a instrução printf(”%d”, ’A’); 
Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiúsculas, letras minúsculas e símbolos especiais. 
No mínimo, determine os números inteiros equivalentes ao conjunto seguinte: A BCabc 0 12 $ * + / e o caractere espaço em branco.*/

#include <stdio.h>

int main() {

  printf("A     B  C  a  b  c     0     1  2     $");
  printf("     *     +     /\n");
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 'A', ' ', 'B', 'C','a', 'b', 'c', ' ', '0', ' ', '1', '2', ' ', '$', ' ', '*', ' ', '+', ' ', '/');
  
  return 0;
}
