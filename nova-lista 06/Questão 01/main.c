#include <stdio.h>
#include <stdlib.h>

/*
a) Elementos da segunda linha da matriz;
b) Elementos da terceira coluna da matriz;
c) Soma dos elementos da quarta linha da matriz;
d) Produto dos elementos da primeira coluna;
e) Maior elemento da segunda coluna;
f) Menor elemento da diagonal principal;
g) Maior elemento da matriz.
*/
int main()
{
    int matriz[4][4] =
    {{4, 6, 8, 12},
    {1, 9, 4, 3},
    {8, 6, 11, 13},
    {3, 7, 5, 2}};

    int i, j, soma = 0, produto = 1;
    int maior = -100000;
    int menor = 100000;

    printf(" Letra A: \n");
    for(i = 0; i < 4; i++)
    printf("%i ", matriz[1][i]);

    printf(" \n\n Letra B: \n");
    for(i = 0; i < 4; i++)
    printf("%i ", matriz[i][2]);

    printf (" \n\n Letra C: \n");
    for (i = 0; i < 4; i++)
    soma += matriz[3][i];
    printf("Soma: %d ", soma);

    printf (" \n\n Letra D: \n");
    for (i = 0; i < 4; i++)
    produto *= matriz[i][0];
    printf("Produto: %d ", produto);

    printf (" \n\n Letra E: \n");
    for (i = 0; i < 4; i++){
        if(matriz[i][1] > maior)
            maior = matriz[i][1];}
    printf("O maior elemento da segunda coluna: %i", maior);

    printf(" \n\n Letra F: \n");
    for (i = 0; i < 4; i++){
        if(matriz[i][i] < menor)
        menor = matriz[i][i];}
    printf("O menor da diagonal principal e: %d", menor);

    printf(" \n\n Letra G: \n");
    maior = -100000;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        if(matriz[i][j] > maior)
        maior = matriz[i][j];
    printf("O maior elemento da matriz: %d", maior);

    return 0;
}
