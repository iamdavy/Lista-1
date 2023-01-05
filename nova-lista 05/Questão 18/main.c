#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 4

/*Desenvolva uma função que receba um vetor e escreva na tela todos os elementos do vetor.*/

void elementos(int numVet[], int tamanho){

    int i;

    for(i = 0; i < tamanho; i++){
        printf("%d \n", numVet[i]);
    }
}
int main()
{
    int numeros[TAMANHO] = {10, 20, 7, 21};

    elementos(numeros, TAMANHO);
    return 0;
}
