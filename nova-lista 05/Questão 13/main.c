#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3

/* Desenvolva uma função que receba um vetor de inteiros e retorne a média dos elementos do vetor. */

int mediaVet(int vet[], int tamanho){
    int i, soma = 0, media;

    for(i = 0; i < tamanho; i++){
        soma+= vet[i];
    }

    media = soma / tamanho;

return media;
}

int main()
{
    int numero[TAMANHO] = {2, 4, 6, 8, 10};

    printf("media: %d \n", mediaVet(numero, TAMANHO));
    return 0;
}
