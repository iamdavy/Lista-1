#include <stdio.h>
#include <stdlib.h>
/*Todo restaurante, embora por lei n�o possa obrigar o cliente a pagar, cobra 10% para o gar�om
como gorjeta. Fa�a um algoritmo que leia o valor gasto com as despesas em um restaurante, mostre
o valor da gorjeta e o valor total da conta (despesa + gorjeta).*/
int main()
{
    float despesa, valorTotal;

    printf("Digite o valor da despesa: \n");
    scanf("%f", &despesa);

    printf("O valor total: %.2f e da gorjeta %.2f", despesa * 0.1 + despesa, despesa * 0.1);
    return 0;
}
