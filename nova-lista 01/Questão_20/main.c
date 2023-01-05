#include <stdio.h>
#include <stdlib.h>
/*O preço de todo produto é constituído de custo mais impostos. Considerando que em média 30%
do preço de um produto são impostos. Leia o preço de um produto, depois mostre quanto o usuário
paga de imposto e de custo no preço do produto. */
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
