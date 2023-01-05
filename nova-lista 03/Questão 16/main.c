#include <stdio.h>
#include <stdlib.h>
/*Informe o valor de R dado por: */
int main()
{
    int i, j = 4;
    float r;

    for(i = 1; i <= 20; i++){
        r+= (float)i / j;
        j+= 1;
    }
        printf("O valor de r: %f \n", r);
    return 0;
}
