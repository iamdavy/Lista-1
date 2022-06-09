#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, raiz, quad;
        printf("Digite um numero: \n");
    scanf("%f", &n1);

    if(n1 > 0)
    {
        raiz = sqrt(n1);
        printf("A raiz de %.1f e %.1f \n", n1, raiz);
    }
    else
    {
        quad = n1*n1;
        printf("O quadrado de %.1f e %.1f \n", n1, quad);
    }




    return 0;
}
