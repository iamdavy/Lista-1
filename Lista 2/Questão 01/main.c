#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero \n");
    scanf("%d", &num);

    if (num==0)
    {
        printf("%d eh igual a 0", num);
    }
    else
    {
    printf("%d nao eh igual a 0", num);
    }

    return 0;
}
