#include <stdio.h>
#include <stdlib.h>
/*Desenvolver um algoritmo que leia um número inteiro e verifique se este é divisível por 3.
*/
int main()
{
    int numero;
    printf("Digite um numero inteiro que seja divisivel por 3 \n");
    scanf("%d",&numero);

    if(numero % 3 == 0){
        printf("Este numero e valido");
    }
    else{
        printf("Este numero e invalido");
    }
    return 0;
}
