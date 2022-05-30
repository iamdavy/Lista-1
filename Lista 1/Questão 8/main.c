#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, result;
    printf("Digite a temperatura em Kelvin para converter em Celsius\n");
    scanf("%f", &K);

    result=K-273.15;

    printf("A temperatura em Celsius e %.1f \n", result);

    return 0;
}
