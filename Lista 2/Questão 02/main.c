#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero positivo: \n");
    scanf("%d", &num);

        if(num >= 0)
            {
            printf("%d eh um numero positivo", num);
            }
        else
            {
            printf("%d eh um numero invalido", num);
            }

    return 0;
}
