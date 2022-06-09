#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Digite o primeiro numero: \n");
        scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
        scanf("%d", &n2);

    if(n1 > n2)
        {
        printf("%d eh maior que %d", n1, n2);
        }
    else
        {
        printf("%d eh maior que %d", n2, n1);
        }


    return 0;
}
