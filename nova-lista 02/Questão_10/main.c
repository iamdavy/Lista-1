#include <stdio.h>
#include <stdlib.h>
/*Leia um número e verifique se ele é par ou ímpar.*/
int main()
{
    int numero;
    printf("Digite um numero \n");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("Esse numero e par");
    }
    else{
        printf("Esse numero e impar");
    }
    return 0;
}
