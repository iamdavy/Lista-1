#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 8

int main()
{
    int i, vetNumero[TAMANHO];
    int x, y;

    printf("Insira 8 numeros:\n");
    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &vetNumero[i]);
    }

    printf("Insira o valor de x e y:(entre 0 e 7)\n");
    scanf("%d %d", &x, &y);

    int soma = vetNumero[x] + vetNumero[y];

    printf("A soma e: %d", soma);
    return 0;
}
