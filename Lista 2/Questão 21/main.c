#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Insira um numero que seja divisivel por 3 ou 5: \n");
    scanf("%d", &numero);

    if(numero % 3 == 0 || numero % 5 == 0){
        printf("OK");
    }
    else
        printf("O numero nao e divisivel por 3 ou 5");
    return 0;
}
