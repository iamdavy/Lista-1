#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, result;

    printf("Digite um numero\n");
    scanf("%i", &num1);

    result= num1*num1;

    printf("O quadrado de %i eh:%i",num1, result);

    return 0;
}
