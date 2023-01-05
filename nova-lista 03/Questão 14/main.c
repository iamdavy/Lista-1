#include <stdio.h>
#include <stdlib.h>
/*– Exiba a média dos números divisíveis por 3 e por 4 menores que 175.*/
int main()
{
    int i, media, numDiv, soma;

    for(i = 12; i<= 175; i+= 12){
        numDiv= (175 / 12);
        soma+= i;
        media= soma / numDiv;
        printf("%d \n", i);
    }
        // printf("%d \n", numDiv);
        printf("A media dos numeros divisiveis por 3 e 4: %d \n", media);
    return 0;
}
