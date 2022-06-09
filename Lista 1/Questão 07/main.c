#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Fa, resul;
    printf("Digite a temperatura em Fahreinheit para converter em Celsius\n");
    scanf("%f", &Fa);

    resul= (Fa - 32) * 5/9;

    printf("A temperatura em Celsius e %2.1f:",resul);

    return 0;
}
