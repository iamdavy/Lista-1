#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, desconto, parcela, comissaoVista, comissaoParcelado;

    printf("Insira o valor do produto: ");
    scanf("%f", &produto);

    desconto = produto - (produto * 0.10);
    printf("O total a pagar com desconto se for a vista: %.2f\n", desconto);

    parcela = produto / 3.0;
    printf("O valor de cada parcela no parcelamento de 3 vezes: %.2f\n", parcela);

    comissaoVista = desconto * 0.05;
    printf("A comissao no caso da venda ser a vista: %.2f\n", comissaoVista);

    comissaoParcelado = produto * 0.05;
    printf("A comissao no caso da venda ser parcelado: %.2f", comissaoParcelado);
    return 0;
}
