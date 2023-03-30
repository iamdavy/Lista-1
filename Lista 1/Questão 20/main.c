#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilogramas, libras;

    printf("Insira o valor da massa em quilogramas: ");
    scanf("%f", &quilogramas);

    libras = quilogramas / 0.45;

    printf("o valor da massa em libras e: %.2f", libras);

    return 0;
}
