#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

/*Implemente um algoritmo que leia 5 números e os armazene em um vetor.
Mostre o menor elemento do vetor, dentre os elementos com índice ímpar. */

int main()
{
    int numero[TAMANHO];
    int i, menor;

    printf("Digite os 5  numeros do vetor: \n");

    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &numero[i]);
    }

    menor = numero[0];

    for(i = 1; i < TAMANHO; i+=2){
        if(i == 0)
        numero[i] = menor;
        if(numero[i] < menor)
            menor = numero[i];
    }

    printf("O menor numero dos elementos entre os indices impares: %d \n", menor);

    return 0;
}
