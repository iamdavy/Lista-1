#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10
int main()
{
    int i, menor, maior;
    int vetor[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    menor = vetor[0];
    maior = vetor[0];

    for(i = 1; i < TAMANHO; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("O maior numero do vetor %d\n", maior);
    printf("O menor numero do vetor %d\n", menor);
    return 0;
}
