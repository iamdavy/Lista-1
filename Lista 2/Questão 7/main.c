#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
        printf("Digite um numero inteiro \n");
    scanf("%d", &n1);

    if (n1 % 2 == 0)
    {
        printf("O numero %d e par", n1);
    }
    else
    {
        printf("O numero %d e impar", n1);
    }

    return 0;
}
