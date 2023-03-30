#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jardas, metros;

    printf("Insira o valor do comprimento em jardas: ");
    scanf("%f", &jardas);

    metros = 0.91 * jardas;

    printf("O valor do comprimento em metros e: %.1f", metros);
    return 0;
}
