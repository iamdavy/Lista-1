#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 4

/*Dado o vetor de inteiros [3, 12, 25, 9], escreva uma função que receba um vetor de inteiros e retorne
a soma dos elementos do vetor.*/

int somaVet(int vet[], int tamanho){

    int i, soma = 0;

    for(i = 0; i < tamanho; i++){
        soma += vet[i];
    }
    return soma;
}


int main()
{
    int numeros[TAMANHO] = {3, 12, 25, 9};

    printf("a soma igual: %d \n", somaVet(numeros, TAMANHO));
    return 0;
}
