#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 4

/*Implemente uma função que receba um vetor de inteiros e retorne o produto dos elementos ímpares
do vetor. */

int produtoVet(int vet[], int tamanho){

    int i, produto = 1;

    for(i = 1; i < tamanho; i+= 2){
        produto*= vet[i];
    }
return produto;
}

int main()
{
    int numeros[TAMANHO] = {4, 3, 2, 2, 5};

    printf("o produto dos indices impares: %d \n", produtoVet(numeros, TAMANHO));
    return 0;
}
