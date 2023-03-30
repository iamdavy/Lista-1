#include <stdio.h>
#include <stdlib.h>

int main()
{
    float polegadas, centimetros;

    printf("Insira o valor em polegadas: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("O valor em centimetros e: %.2f", centimetros);
    return 0;
}
