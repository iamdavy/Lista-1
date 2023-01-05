#include <stdio.h>
#include <stdlib.h>
/*Receba um número inteiro e verifique se este é divisível por 3 e por 5 ao mesmo tempo*/
int main()
{
    int numero;
    printf("Digite um numero inteiro divisivel por 3 e 5 \n");
    scanf("%d", &numero);

    if(numero % 3 == 0 && numero % 5 == 0){
        printf("Este numero e valido");
    }
    else{
        printf("Este numero e invalido");
    }
    return 0;
}
