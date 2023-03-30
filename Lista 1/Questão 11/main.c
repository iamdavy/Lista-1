#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ms, km;

    printf("Insira a velocidade em metros por segundo: ");
    scanf("%f", &ms);

    km = ms * 3.6;

    printf("A velocidade convertida em Quilometros por Minuto e %.1f", km);
    return 0;
}
