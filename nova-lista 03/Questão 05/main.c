#include <stdio.h>
#include <stdlib.h>
/*Escreva os n�meros pares de 175 at� 51.*/
int main()
{
    int i;
    for(i = 175; i >= 50; i--){
       if(i % 2 == 0)
        printf("%d ", i);

    }
    return 0;
}
