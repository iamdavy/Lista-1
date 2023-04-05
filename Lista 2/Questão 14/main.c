#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("numero invalido");
    }
    else{
        resultado = log10(numero);
        printf("%d", resultado);
    }
    return 0;
}
