#include <stdio.h>
#include <stdlib.h>


/*Crie uma fun��o que atualize o valor de um elemento do vetor. A fun��o recebe um vetor,
o novo valor do elemento e o �ndice do elemento. */

void novoValor(int vet[], int *tamanho, int valor){

    vet[*tamanho] = valor;

    (*tamanho)++;



}
int main()
{

    return 0;
}
