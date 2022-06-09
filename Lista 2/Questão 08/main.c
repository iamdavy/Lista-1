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
        printf("O numero %d e maior que %d e a sua diferenca e %d \n", n1, n2, n1-n2);
    }
    else (n2 > n1);
    {
        printf("O numero %d e maior que %d e a sua diferenca e %d \n", n2, n1, n2-n1);
    }

    return 0;
}
