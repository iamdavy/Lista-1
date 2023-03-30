#include <stdio.h>
#include <stdlib.h>

int main()
{
    float polegadas, centimetros;

    printf("Insira o valor em centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("O valor em polegadas e: %.2f", polegadas);
    return 0;
}
