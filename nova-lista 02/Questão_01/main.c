#include <stdio.h>
#include <stdlib.h>
/*Crie um algoritmo que leia um n�mero inteiro e escreva na tela menor que 100, se o n�mero lido
for menor que 100. Caso o n�mero lido seja maior ou igual a 100, o programa dever� escrever na
tela maior ou igual a 100.*/
int main()
{
    int num;
    printf("Digite um numero \n");
    scanf("%d", &num);

    if(num < 100)
    {
        printf("%d menor que 100", num);
    }
    else {
        printf("%d maior ou igual a 100", num);
    }


    return 0;
}
