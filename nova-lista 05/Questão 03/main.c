#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 7
/*Inicialize um vetor com os números
102, 450, 29, 559, 315, 94 e 120.
Escreva os elementos com índice múltiplo de 3.
Em seguida, mostre os elementos divisíveis por 5.*/
int main()
{
    int numero[TAMANHO] = {102, 450, 29, 559, 315, 94, 120};
    int i;

    for(i = 3; i < TAMANHO; i+=3){
            printf("O elemento %d e indice multiplo de 3 \n", numero[i]);
    }
    for(i = 0; i < TAMANHO; i++){
        if(numero[i] % 5 == 0)
            printf("O elemento %d e divisivel por 5 \n", numero[i]);
    }

    return 0;
}
