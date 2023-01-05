#include <stdio.h>
#include <stdlib.h>
/*Em uma empresa, os sacos de arroz são classificados de acordo com o peso, como na tabela abaixo.
Implemente um algoritmo que receba o peso de um saco e mostre qual sua classificação */
int main()
{
    int peso;
    printf("Digite o peso do saco de arroz: ");
    scanf("%d", &peso);

    if(peso >= 1 && peso <= 3)
        printf("Pequeno");
    else if(peso >= 6 && peso <= 10)
        printf("Medio");
    else if(peso >= 17 && peso <= 20)
        printf("Grande");
    else
        printf("Peso invalido");
    return 0;
}
