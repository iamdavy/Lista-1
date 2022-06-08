#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, q4, rz;
        printf("Digite um numero positivo \n");
    scanf("%f", &n1);


    if (n1 > 0)
    {
        q4= n1*n1;
        rz= sqrt(n1);
            printf("O quadrado e a raiz de %.f e: %.f e %.2f \n", n1, q4, rz);

    }

    else
    {
       printf("O numero %.1f e invalido", n1);
    }

    return 0;
}
