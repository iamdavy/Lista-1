#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que leia um n�mero inteiro e diga se o n�mero � diferente de 23*/
int main()
{
    int num;
    printf("Digite um numero inteiro \n");
    scanf("%d", &num);

    if(num != 23){
        printf("O numero %d e diferente de 23", num);
    }
    else{
        printf("O numero %d e igual a 23", num);
    }
    return 0;
}
