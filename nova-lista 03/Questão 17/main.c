#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 7;
    float v;

    for(i = 17; i >= 7; i-= 2){
        v+= (float)i / j;
        j+= 2;
    }
    printf("o valor de V: %f", v);
    return 0;
}
