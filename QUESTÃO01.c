/*1.Diga a ordem de cálculo dos operadores em cada uma das instruções em C a seguir e mostre o valor d°e x depois que cada instrução for executada. 
• x = 7 + 3*6/2-l
• x = 2%2 + 2*2-2/2;
• x = (3 * 9 * (3 + (9*3/ (3) ) ) );*/

/*a ordem de calculo é
° 3*6 depois / por 2 depois + com 7 e - 1
° 2%2 depois 2*2 depois 2/2 depois soma e subtrai
° 9*3 / 3, depois + 3, depois * 9, depois * 3 */

#include <stdio.h>

int main() {
  int x1, x2, x3; 

  x1 = 7 + 3*6/2-1;
  x2 = 2%2 + 2*2-2/2;
  x3 = (3 * 9 * (3 + (9*3/ (3) ) ) );
  printf("x = 7 + 3*6/2-l = %i\n", x1);
  
  printf("x = 2%%2 + 2*2-2/2 = %i\n", x2);
  
  printf("x = (3 * 9 * (3 + (9*3/ (3) ) ) ) = %i ", x3);

    return 0;
}
