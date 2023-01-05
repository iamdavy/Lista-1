#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

//LEMBRAR DE PERGUNTAR O ITALO SOBRE A LINHA 22

/*Implemente um algoritmo que leia 5 números e os armazene em um vetor. Mostre o maior elemento
do vetor.*/


int main()
{
    int numero[TAMANHO];
    int i, maior = 0;

    printf("Digite os 5  numeros do vetor: \n");

    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &numero[i]);
    }

    maior = numero[0];

    for(i = 0; i < TAMANHO; i++){
        if(i == 0)
        numero[i] = maior;
        if(numero[i] > maior)
            maior = numero[i];
    }

    printf("O maior numero dos elementos e: %d \n", maior);


    return 0;
}
