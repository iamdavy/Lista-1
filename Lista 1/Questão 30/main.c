#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real, dolar, cotacaoDolar = 5.11;

    printf("Insira o valor em real: ");
    scanf("%f", &real);

    dolar = real / 5.11;

    printf("O valor convertido em dolar e: $ %.2f", dolar);
    return 0;
}
