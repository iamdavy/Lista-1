#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, result;
    printf("Digite a temperatura em Celsius para converter em Kelvin\n");
    scanf("%f", &C);

    result= C+273.15;

    printf("A temperatura em Kelvin e %.1f \n", result);
    return 0;
}
