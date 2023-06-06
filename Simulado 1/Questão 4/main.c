#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, digito, inverso = 0;

    printf("Insira o numero: \n");
    scanf("%d", &numero);

    for(;numero > 0; numero /= 10){
        digito = numero % 10;
        inverso = inverso * 10 + digito;
    }
    printf("O numero invertido e %d\n", inverso);
    return 0;
}
