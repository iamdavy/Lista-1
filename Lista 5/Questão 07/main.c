#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

int main()
{
     int matriz[L][C];
   int i, j, soma = 0;

   printf("Digite os elementos da matriz 3x3:\n");
   for(i = 0; i < L; i++) {
      for(j = 0; j < C; j++) {
         scanf("%d", &matriz[i][j]);
      }
   }

   for(i = 0; i < L; i++) {
      soma += matriz[i][i];
   }

   printf("A soma dos elementos da diagonal principal e %d\n", soma);

    return 0;
}
