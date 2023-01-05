#include <stdio.h>
#include <stdlib.h>
/*Implemente um programa que recebe a quantidade de produtos do cliente, e mostre o valor total
das compras em uma loja de R$ 1,99.
*/
int main()
{
    float valor, resultado;
    int QuantidadeProd;

    valor = 1.99;
    printf("Quantidade de produtos do cliente: \n");
    scanf("%d", &QuantidadeProd);

    resultado = valor * QuantidadeProd;

    printf("O valor das compras e: %.2f", resultado);

    return 0;
}
