#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jardas, metros;

    printf("Insira o valor do comprimento em metros: ");
    scanf("%f", &metros);

    jardas = metros / 0.91;

    printf("O valor do comprimento em jardas e: %.1f", jardas);
    return 0;
}
