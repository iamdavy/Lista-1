#include <stdio.h>
#include <stdlib.h>
/*Desenvolva um algoritmo que receba um número inteiro e escreva OK na tela, se o número lido for
maior que zero e menor que 10.*/
int main()
{
    int num;
    printf("Digite um numero inteiro que seja maior que 0 e menor 10\n");
        scanf("%d", &num);

    if(num > 0 && num <= 10){
        printf("OK");
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}
