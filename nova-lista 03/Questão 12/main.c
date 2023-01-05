#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que peça dois números, base e expoente. Mostre o primeiro número elevado ao
segundo número. Não utilize a função de potência da linguagem.*/
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
