#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, result;
    printf("Digite a temperatura em Celsius para converter em Fahreinheit\n");
    scanf("%f", &C);

    result= C * 9/5+32;

    printf("A temperatura em Fahreinheit ficou em %2.1f", result);

    return 0;
}
