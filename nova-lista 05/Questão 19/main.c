#include <stdio.h>
#include <stdlib.h>


/*Crie uma função que atualize o valor de um elemento do vetor. A função recebe um vetor,
o novo valor do elemento e o índice do elemento. */

void novoValor(int vet[], int *tamanho, int valor){

    vet[*tamanho] = valor;

    (*tamanho)++;



}
int main()
{

    return 0;
}
