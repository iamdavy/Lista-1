#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que obt�m um n�mero e imprime a sua imagem pela fun��o.*/
int main()
{
    int x;
    printf("Digite o valor de x: \n");
    scanf("%d", &x);

    if(x <= 5 || x == 7){
        printf("2");
    }
    else if(x == 10 || x == 13){
        printf("6");
    }
    else if(x > 20){
        printf("10");
    }
    return 0;
}
