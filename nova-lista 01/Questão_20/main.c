#include <stdio.h>
#include <stdlib.h>
/*O pre�o de todo produto � constitu�do de custo mais impostos. Considerando que em m�dia 30%
do pre�o de um produto s�o impostos. Leia o pre�o de um produto, depois mostre quanto o usu�rio
paga de imposto e de custo no pre�o do produto. */
int main()
{
    float precoProd, imposto;

    printf("Digite o valor do produto: \n");
    scanf("%f", &precoProd);

    imposto = precoProd * 0.3;

    printf("O usuario paga %.2f de imposto \n", imposto);
    printf("O usuario tem um custo de %.2f \n", precoProd - imposto);

    return 0;
}
