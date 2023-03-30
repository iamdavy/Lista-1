#include <stdio.h>
#include <stdlib.h>

int main()
{
    float graus, radianos;
    const float pi = 3.14;

    printf("Insira o radiano do angulo: ");
    scanf("%f", &radianos);

    graus = radianos * 180 / pi;

    printf("O valor do angulo em graus e %.2f", graus);
    return 0;
}
