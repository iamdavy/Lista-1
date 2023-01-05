#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Faça um algoritmo que receba o peso de uma pessoa em quilogramas. Exiba o peso da pessoa em
gramas.*/

    float kg;
    printf("Digite o seu peso \n");
    scanf("%f",&kg);

    kg *= 1000;

    printf("O seu peso em gramas e: %.f", kg);
    return 0;
}
