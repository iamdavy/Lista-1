#include <stdio.h>
#include <stdlib.h>
/*Mostre na tela a mensagem OK, se o triplo de um n�mero lido for maior que 50 ou o cubo seja
menor ou igual a 100. Caso contr�rio o programa escreve Falha.*/
int main()
{
    int num;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num * 3 > 50 || num * num * num <= 100){
        printf("OK");
    }
    else{
        printf("Falha");
    }
    return 0;
}
