#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

/*Implemente um algoritmo que leia 5 números e os armazene em um vetor. Em seguida, escreva os
números ímpares armazenados nas posições de índice ímpar do vetor. */

int main()
{
    int numeros[TAMANHO];
    int i;

    printf("Informe os 5 elementos do vetor: ");

    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &numeros[i]);
    }
    printf("Os elementos com valores impares armazenados em indices impares sao: \n");
    for(i = 1; i < TAMANHO; i+= 2){
        if(numeros[i] % 2 != 0)
         printf ("%d, ", numeros [i]);
    }
    return 0;
}
