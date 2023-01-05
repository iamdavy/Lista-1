#include <stdio.h>
#include <stdlib.h>
/*Receba um valor n > 0 e mostre o valor do somatório:*/
int main()
{
    int soma = 0;
    int i, n, sinal = -1;

    printf("numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        soma+= sinal * i;
        sinal*= -1;

    }
    printf("o valor e: %d \n", soma);
    return 0;
}
