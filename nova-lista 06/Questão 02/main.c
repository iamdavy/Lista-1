#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4] ={{3, 16, 7, 11}, {13, 4, 10, 8}, {21, 8, 6, 5}, {5, 9, 1, 15}};

    int i, j, menor = 100000, maior = -100000, media;
    int soma = 0, produto = 1;

    printf("Letra A: \n");
    for(i = 0; i < 4; i++)
    printf("%d ", matriz[2][i]);


    printf(" \n\nLetra B: \n");
    for(i = 0; i < 4; i++)
    printf("%d \n", matriz[i][1]);


    printf(" \nLetra C: \n");
    for(i = 0; i < 4; i++)
        soma+=matriz[i][3];
    printf("Soma = %d", soma);


    printf("\n\nLetra D: \n");
    for(i = 0; i < 4; i++)
        produto*=matriz[2][i];
    printf("Produto = %d", produto);


    printf("\n\nLetra E: \n");
    for(i = 0; i < 4; i++){
        if(matriz[3][i] < menor)
        menor = matriz[3][i];}
    printf("Menor elemento: %d", menor);


    printf("\n\nLetra F: \n");
    for(i = 0; i < 4; i++){
        if(matriz[i][i] > maior)
            maior = matriz[i][i];}
    printf("O maior elemento: %d", maior);


    printf("\n\nLetra G: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++)
        if(matriz[i][j] < menor)
            menor = matriz[i][j];}
    printf("O menor elemento da matriz: %d", menor);

    printf("\n\nLetra H: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++)
        soma+= matriz[i][j];}
    printf("A media dos elementos da matriz e: %d", soma / 16);


    printf("\n\nLetra I: \n");
    soma = 0;
    for(i = 0; i < 4; i++)
        soma+=matriz[1][i];
    printf("O valor medio da segunda linha: %.2f", (float)soma / 4);

    return 0;
}
