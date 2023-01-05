#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 11

/*Crie um vetor com 11 elementos. Faça uma função que receba um vetor e retorne o valor de S dado
por:*/

float somaVet(int vet[]){
    int i;
    float r;

    for(i = 0; i <= 10; i++){
        r+= (float)i/vet[i];
    }

return r;
}
int main()
{
    int numeros[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    printf("O valor de s: %.2f \n", somaVet(numeros));
    return 0;
}
