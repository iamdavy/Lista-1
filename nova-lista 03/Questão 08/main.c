#include <stdio.h>
#include <stdlib.h>
/*Informa a soma dos n�meros divis�veis por 5 de 55 at� 123.*/
int main()
{
    int i, soma;

    for(i = 55; i <= 123; i += 5){
          soma += i;
        printf("%d \n", i);
    }
    printf("soma = %d \n", soma);
    return 0;
}
