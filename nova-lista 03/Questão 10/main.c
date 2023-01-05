#include <stdio.h>
#include <stdlib.h>
/* Informe o produto dos números pares de 43 até 77. */
int main()
{
    int i;
    float produto = 1;

    for(i = 44; i <= 77; i += 2){

        produto *= i;
        //printf("%.0f \n", produto);
    }
        printf("Produto = %.0f \n", produto);
    return 0;
}
