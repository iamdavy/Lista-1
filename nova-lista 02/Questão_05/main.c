#include <stdio.h>
#include <stdlib.h>
/*Desenvolva um programa que leia um n�mero inteiro e escreva OK na tela, se o n�mero lido for
maior que 30 e menor ou igual a 42.*/
int main()
{
    int num;
    printf("Digite um numero inteiro maior que 30 e menor ou igual a 42 \n");
        scanf("%d", &num);

    if(num > 30 && num <= 42){
        printf("OK");
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}
