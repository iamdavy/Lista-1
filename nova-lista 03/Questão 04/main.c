#include <stdio.h>
#include <stdlib.h>
/*Escreva os n�meros divis�veis por 5 de 550 at� 690.*/
int main()
{
    int i;
    for(i=550; i<=690; i+=5){
        printf("%d ", i);
    }
    return 0;
}
