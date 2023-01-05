#include <stdio.h>
#include <stdlib.h>
/*Escreva a soma dos números múltiplos de 3 e por 5 entre 356 e 455.*/
int main()
{
    int i, soma;

    for(i = 360; i <= 455; i += 15){

        soma += i;
        printf("%d \n", i);
    }
    printf("soma = %d \n", soma);
    return 0;
}
