#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 10

int main()
{
    float vetNumero[TAMANHO], vetResultado[TAMANHO];
    int i;

    for(i = 0; i < TAMANHO; i++){
        printf("numero %d: ", i + 1);
        scanf("%f", &vetNumero[i]);
    }

    for(i = 0; i < TAMANHO; i++){
        vetResultado[i] = pow(vetNumero[i], 2);
        printf("Vetor ao quadrado: %.2f\n]", vetResultado[i]);
    }
    return 0;
}
