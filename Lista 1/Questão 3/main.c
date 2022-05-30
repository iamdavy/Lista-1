#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, resul;
    printf("Digite o primeiro valor para somar\n");
    scanf("%i",&num1);
    printf("Digite o segundo valor para somar\n");
    scanf("%i",&num2);
    printf("Digite o tercceiro valor para somar\n");
    scanf("%i",&num3);

    resul=num1+num2+num3;

    printf("O resultado da soma e:%d\n",resul);

    return 0;
}
