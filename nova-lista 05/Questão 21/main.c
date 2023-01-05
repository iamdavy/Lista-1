#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

/*Escreva uma função que verifica se um valor está entre os elementos de um vetor. A função retorna
o valor do índice do elemento onde o valor se encontra, e retorna -1 se o valor não está presente no
vetor.*/

int verificaElementoVet(int vet[], int tamanho, int valor){

    int i;

    for(i = 0; i < tamanho; i++){
        if(valor == vet[i]){

            return i;
        }
    }

return -1;
}
int main()
{
    int i, x;

    int numeros[TAMANHO] = {1, 2, 3, 4, 5, 6};

    printf("Digite um numero para busca: ");
    scanf("%d", &x);

    int indice = verificaElementoVet(numeros, TAMANHO, x);

    if(indice == -1)
        printf(" \n nao esta no vetor \n", x);
    else
        printf("%d esta na posicao %d \n", x, indice);

    return 0;
}
