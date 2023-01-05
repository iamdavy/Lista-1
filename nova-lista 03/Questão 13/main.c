#include <stdio.h>
#include <stdlib.h>
/*Apresente a média dos números ímpares de 50 até 85. */
int main()
{
    int i, soma, media, numDiv;

    for(i = 51; i <= 85;  i+=2){
        soma+= i;
        numDiv = ((85 - 51)/2) + 1;
        media = soma / numDiv;

    }
        printf("%d \n", numDiv);
        printf("%d \n", soma);
        printf("%d \n", media);
    return 0;
}
