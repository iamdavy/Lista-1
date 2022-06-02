#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Digite um numero positivo \n");
        scanf("%d", &n1);

    if(n1 > 0)
    {
        printf("A raiz quadrada de %d eh %d", n1, n1*n1);
    }
    else
    {
        printf("Esse numero eh invalido");
    }

    return 0;
}
