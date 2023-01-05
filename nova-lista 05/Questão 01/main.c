#include <stdio.h>
#include <stdlib.h>
/*Inicialize um vetor com os números 71, 62, 16, 11, 25 e 31. Mostre os elementos
com índice par. Em seguida, mostre os elementos do vetor com valor par.*/
int main()
{
    int i;
    int numeros [6] = {71 , 62 , 16 , 11 , 25 , 31};

        printf ("Os elementos de indice par sao: \n");

    for(i = 0; i < 6; i += 2){
        printf ("%i, ", numeros [i]);
}

        printf ("\nOs elementos com valores par sao: \n");
    for(i = 0; i < 6; i++){
        if( numeros [i] % 2 == 0)
        printf ("%i, ", numeros [i]);
}

    return 0;
}
