#include <stdio.h>
#include <stdlib.h>
/*Escrever um programa para ler um número inteiro e imprimir se ele é positivo, negativo ou nulo*/
int main()
{
    int num;
    printf("Digite um numero inteiro \n");
        scanf("%d", &num);

    if(num > 0){
        printf("O numero %d e positivo", num);
    }
    else if(num == 0){
        printf("O numero %d e nulo", num);
    }
    else{
        printf("O numero %d e negativo");
    }
    return 0;
}
