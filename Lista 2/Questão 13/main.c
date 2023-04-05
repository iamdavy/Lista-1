#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    if(numero > 0){
        while(numero > 0 ){
            soma+= numero % 10;
            numero = numero / 10;
        }
        printf("A soma e: %d", soma);
    }
    else
        printf("O numero e invalido");
    return 0;
}
