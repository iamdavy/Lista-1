#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um n�mero e escreva na tela OK se a metade do n�mero for maior
que 10 e o n�mero for �mpar. Caso contr�rio escreva Falha.*/
int main()
{
    int num, metade;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    metade = num / 2;

    if(metade > 10 && metade % 2 == 1){
        printf("OK");
    }
    else{
        printf("Invalido");
    }
    return 0;
}
