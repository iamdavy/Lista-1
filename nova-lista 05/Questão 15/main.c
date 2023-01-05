#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 6

/*Crie um vetor com 6 elementos. Implemente uma função que receba um vetor e retorne valor de T
dado por: */

float valorT(int vet[]){

int i, j = 10;
float t = 1;

    for(i = 0; i <= 5; i++){
        t*=pow (vet[i], 2)/ j;
        j++;
    }

return t;
}
int main()
{
    int numeros[TAMANHO] = {1, 2, 3, 4, 5, 6, 7};

    printf("O valor de T: %f \n", valorT(numeros));
    return 0;
}
