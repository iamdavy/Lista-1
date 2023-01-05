#include <stdio.h>
#include <stdlib.h>
/*No boxe, os atletas são divididos em categorias de acordo com o seu peso, seguindo a tabela abaixo.
Desenvolva um programa que receba o peso de um atleta (em kg) e mostre a classificação do atleta
de acordo com a tabela abaixo. */
int main()
{
    int peso;
    printf("Digite o seu peso: ");
    scanf("%d", &peso);

    if(peso <= 52)
        printf("Peso mosca");
    else if(peso >= 53 && peso <= 56)
        printf("Peso Galo");
    else if(peso >= 57 && peso <= 60)
        printf("Peso Leve");
    else
        printf("Peso invalido");

    return 0;
}
