#include <stdio.h>
#include <stdlib.h>
/*Em um mercado, o pre�o de um produto � de R$ 15,00. Implemente um programa que receba o
n�mero de produtos vendidos e informe o valor total da venda.
*/
int main()
{
    float valor, resultado;
    int QuantidadeProd;

    valor = 15.00;
    printf("Quantidade de produtos vendidos: \n");
    scanf("%d", &QuantidadeProd);

    resultado = valor * QuantidadeProd;

    printf("O valor das vendas e: %.2f", resultado);
    return 0;
}
