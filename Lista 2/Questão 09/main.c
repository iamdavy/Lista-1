#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
        printf("Digite o primeiro numero inteiro \n");
    scanf("%d", &n1);
        printf("Digite o segundo numero inteiro \n");
    scanf("%d", &n2);

     if (n1 > n2)
    {
        printf("O numero %d e maior que %d \n", n1, n2);
    }
    else if(n2 > n1)
    {
        printf("O numero %d e maior que %d \n", n2, n1);
    }

    else
    {
        printf("O numero %d e %d sao iguais \n", n1, n2);
    }


    return 0;
}
