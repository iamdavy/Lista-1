#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int i, maior, indiceMaior = 0;
    int numeroVet[TAMANHO];

    printf("Insira 10 numeros \n");
    for(i = 0; i < TAMANHO; i++){
        printf("Insira um numero: ");
        scanf("%d", &numeroVet[i]);
    }

    maior = numeroVet[0];

    for(i = 1; i < TAMANHO; i++){
        if(numeroVet[i] > maior){
            maior = numeroVet[i];
            indiceMaior = i;
        }
    }

    printf("O maior numero e %d e sua posicao no vetor e %d", maior, indiceMaior);
    return 0;
}
