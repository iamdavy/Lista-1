#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

/*Escreva um programa que armazena 6 números em um vetor e informa o maior elemento do vetor
que é divisível por 5.*/


int main()
{
    int numero[TAMANHO];
    int i, maior;

    printf("Digite os 6 elementos do vetor: \n");

    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &numero[i]);
    }
    maior = numero[0];
    for(i = 0; i < TAMANHO; i++){
        if(numero[i] % 5 == 0 && i == 0)
        numero[i] = maior;
        if(numero[i] > maior)
            maior = numero[i];
    }
    printf("O maior elemento do vetor que e divisivel por 5: %d", maior);
    return 0;
}
