#include <stdio.h>
#include <stdlib.h>
/*Apresente a m�dia dos n�meros �mpares de 50 at� 85. */
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
