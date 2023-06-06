#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int i, vetNumero[TAMANHO];
    int cont = 0;

    printf("Insira 10 numeros: \n");
    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &vetNumero[i]);
    }
    for(i = 0; i < TAMANHO; i++){
        if(vetNumero[i] % 2 == 0){
            printf("\n%d", vetNumero[i]);
        cont++;
        }
    }

    printf("\nTem %d pares", cont);

    return 0;
}
