#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que pe�a dois n�meros, base e expoente. Mostre o primeiro n�mero elevado ao
segundo n�mero. N�o utilize a fun��o de pot�ncia da linguagem.*/
int main()
{
    int i, produto = 1, expoente, base;

    printf("base: ");
        scanf("%d", &base);

    printf("expoente: ");
        scanf("%d", &expoente);

        for(i = 0; i < expoente; i++){
            produto *= base;
        }
        printf("%d \n", produto);
    return 0;
}
