#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

int main()
{
    int i, numeroVet[TAMANHO];

    printf("Informe 6 valores\n");
    for(i = 0; i < TAMANHO; i++){
        printf("Insira um valor: ");
        scanf("%d", &numeroVet[i]);
    }

    for(i = TAMANHO; i >= 0; i--){
        printf("%d ", numeroVet[i]);
    }
    return 0;
}
