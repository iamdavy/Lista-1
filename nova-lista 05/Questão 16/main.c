#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

/*Crie um vetor com 5 elementos. Desenvolva uma função que receba um vetor e retorne valor de U
dado por: */

float valorU(int vet[]){

int i, j = 5;
float u = 1;

    for(i = 0; i < TAMANHO; i++){
        u *=  j / vet[i];
        j+=2;
    }
return u;
}
int main()
{
    int numeros[TAMANHO] = {1, 2, 3, 4, 5};

    printf("Valor de U: %.2f \n", valorU(numeros)*8);
    return 0;
}
