#include <stdio.h>
#include <stdlib.h>
/*Um supermercado ajustará os preços de seus produtos de acordo
com o número de vendas mensal, utilizando a tabela abaixo.
Faça um algoritmo que receba o preço atual de um produto e a
quantidade de vendas mensal, e informe o novo preço do produto. */
int main()
{
    float preco;
    int vendasMensais;
        printf("Digite o preco do produto: ");
        scanf("%f", &preco);
        printf("Digite a quantidade de vendas mensal do produto: ");
        scanf("%d", &vendasMensais);

        if(vendasMensais < 500)
            printf("O novo preco do produto e %.2f", preco * -0.1 + preco);
        else if(vendasMensais >= 500 && vendasMensais <= 1200)
            printf("O novo preco do produto e %.2f", preco * 0.15 + preco);
        else if(vendasMensais > 1200)
            printf("O novo preco do produto e %.2f", preco * 0.2 + preco);
    return 0;
}
