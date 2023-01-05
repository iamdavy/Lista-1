#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia o ano de nascimento de uma pessoa e o ano atual. Mostre a idade
da pessoa em anos*/
int main()
{
    int anoAtual, anoNasc, idade;

    printf("Digite o ano atual \n");
    scanf("%d", &anoAtual);

    printf("Digite o ano do seu nascimento \n");
    scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    printf("Voce tem %d anos \n", idade);
    return 0;
}
