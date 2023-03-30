#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metrosQuadrados, acres;

    printf("Insira um valor de uma area em metros quadrados: ");
    scanf("%f", &metrosQuadrados);

    acres = metrosQuadrados * 0.000247;

    printf("O valor da area em acres e: %f", acres);
    return 0;
}
