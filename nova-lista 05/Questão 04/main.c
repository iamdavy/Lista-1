#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 7

/*Dado o vetor [35, 602, 100, 38, 82, 62, 510], mostre os elementos com índice par e que são múltiplos
de 2 e 5.*/

int main()
{
    int numero[TAMANHO] = {35, 602, 100, 38, 82, 62, 510};
    int i;

    for(i = 0; i < TAMANHO; i += 2){
        if(numero[i] % 10 == 0)
            printf("E um elemento com indice par multiplo de 2 e 5: %d \n", numero[i]);
    }
    return 0;
}
