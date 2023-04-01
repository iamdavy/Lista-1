#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valorA, valorB, hipotenusa;

    printf("Insira o valor de A: ");
    scanf("%f", &valorA);
    printf("Insira o valor de B: ");
    scanf("%f", &valorB);

    hipotenusa = sqrt((valorA * valorA) + (valorB + valorB));


    printf("A hipotenusa do triangulo e: %.2f", hipotenusa);

    return 0;
}
