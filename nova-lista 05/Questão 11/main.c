#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 7

/*Escreva uma função que receba um vetor de inteiros e retorne o produto dos elementos de um vetor. */

int produtoVet(int produto[], int tamanho){

    int i, produtoRet = 1;

    for(i = 0; i < tamanho; i++){
        printf("%d \n", produto[i]);
        produtoRet *= produto[i];
    }

return produtoRet;

}

int main()
{
    int numero[TAMANHO] = {4, 5, 6, 7, 8, 9, 6, 7};

    printf("%d \n", produtoVet(numero, TAMANHO));
    return 0;
}
