#include <stdio.h>
#include <stdlib.h>
/*Exiba o valor de S dado por:*/
int main()
{
    int i, j = 5;
    float s;

    for(i= 1; i <=17; i+=2){
        s+= (float)i / j;
        j+= 5;
}
    printf("%f \n", s);

    return 0;
}
