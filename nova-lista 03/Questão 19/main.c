#include <stdio.h>
#include <stdlib.h>
/*Exiba o valor de F dado por:*/

int main()
{
    int i, b = 121;
    float r;

    for(i = 20; i <= 80; i+=5){
        r+=(float)i/b;
        b-=7;

    }
        printf("o valor de F e: %f \n", r + 7);
    return 0;
}
