#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 7

/*Faça uma função que remove um elemento de um vetor. A função recebe um vetor e o índice do
elemento que será removido.
Exemplo:
Vetor inicialmente -> [3, 7, 9, 10, 35, 79, 155]
remove o elemento de índice 2
vetor após remoção do elemento de índice 2 -> [3, 7, 10, 35, 79, 155]*/

int tamanho = TAMANHO;

void removerElemento(int vet[], int *tamanho, int ind){
    int i;

    for(i = ind; i < *tamanho; i++)
        vet[i] = vet[i + 1];

    (*tamanho)--;

    for(i = 0; i < *tamanho; i++){
        printf("%d ", vet[i]);
    }
}
int main()
{
    int numeros[TAMANHO] = {3, 7, 9, 10, 35, 79, 155};
    int i, ind;

    for(i = 0; i < tamanho; i++){
        printf("%d ", numeros[i]);
    }

    printf("\nDigite um indice para excluir: ");
    scanf("%d", &ind);

    removerElemento(numeros, &tamanho, ind);
return 0;
}
