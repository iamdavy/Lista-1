#include <stdio.h>
#include <stdlib.h>
/* Mostre a soma dos n�meros �mpares de 410 at� 551.*/
int main()
{

    int i, soma = 0;

   for(i = 411; i <= 551; i += 2){

    soma += 1;

   }

    printf("soma = %d \n", soma);
    return 0;
}
