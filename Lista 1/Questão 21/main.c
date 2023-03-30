#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilogramas, libras;

    printf("Insira o valor da massa em libras: ");
    scanf("%f", &libras);

    quilogramas = libras * 0.45;

    printf("o valor da massa em quilogramas e: %.1f", quilogramas);

    return 0;
}
