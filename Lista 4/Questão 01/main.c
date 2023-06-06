#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[6];
    int i;

    for(i; i < 6; i++){
        printf("Insira um numero: ");
        scanf("%d", &numeros[i]);
    }

    for(i = 0;i < 6; i++){
        printf("%d ", numeros[i]);
    }

    return 0;
}
