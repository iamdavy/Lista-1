#include <stdio.h>
#include <stdlib.h>

int main()
{
    float graus, radianos;
    float pi = 3.14;

    printf("Insira o grau do angulo: ");
    scanf("%f", &graus);

    radianos = graus * pi / 180;

    printf("O valor do angulo em radianos e %.2f", radianos);
    return 0;
}
