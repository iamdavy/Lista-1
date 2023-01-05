#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6
/*Inicialize um vetor com os números 54, 42, 33, 18, 75 e 72.
Mostre os elementos com índice ímpar. Em seguida,
mostre os elementos do vetor com valor par.*/

int main()
{
    int numeros[TAMANHO] = {54, 42, 33, 18, 75, 72};
    int i;

    for(i = 1; i < TAMANHO; i += 2){
            printf("O numero do indice impar: %d \n", numeros[i]);
    }
    for(i = 0; i < TAMANHO; i++){
        if(numeros[i] % 2 == 0)
            printf("O numero e par: %d \n", numeros[i]);
    }

    return 0;
}
