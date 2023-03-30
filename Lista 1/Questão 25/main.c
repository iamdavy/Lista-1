#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metrosQuadrados, acres;

    printf("Insira um valor de uma area em acres: ");
    scanf("%f", &acres);

    metrosQuadrados = acres * 4048.58;

    printf("O valor da area em metros quadrados e: %.1f", metrosQuadrados);

    return 0;
}
