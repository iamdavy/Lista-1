#include <stdio.h>
#include <stdlib.h>
/*Implemente um algoritmo que receba a data de nascimento de duas pessoas (dia, mês e ano), informe
qual das duas é a mais velha.*/
int main()
{
    int a1, a2, m1, m2, d1, d2;
    printf("Digite a data de nascimento da primeira pessoa: DD/MM/AAAA \n");
    scanf("%d%d%d", &d1, &m1, &a1);
    printf("Digite a data de nascimento da segunda pessoa: DD/MM/AAAA \n");
    scanf("%d%d%d", &d2, &m2, &a2);

    if(a1 > a2)
        printf("\n A segunda pessoa e mais velha");
    else if(a1 < a2)
        printf("\n A primeira pessoa e mais velha");
    else if (m1 > m2)
        printf("\n A segunda pessoa e mais velha");
    else if (m1 < m2)
        printf("\n A primeira pessoa e mais velha");
    else if (d1 > d2)
        printf("\n A segunda pessoa e mais velha");
    else if(d2 > d1)
        printf("\n A primeira pessoa e mais velha");
    else
        printf("\n As duas pessoas tem a mesma idade.");
    return 0;
}
