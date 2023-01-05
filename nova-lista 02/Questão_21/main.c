#include <stdio.h>
#include <stdlib.h>
/*Escrever um algoritmo que leia três números diferentes e exiba o maior deles.*/
int main()
{
    int n1, n2, n3;
        printf("Digite tres numeros: ");
            scanf("%d%d%d",&n1,&n2,&n3);
    if(n1 > n2 && n1 > n3)
        printf("O numero %d e maior que %d e %d", n1, n2, n3);
    else if(n2 > n1 && n2 > n3)
        printf("O numero %d e maior que %d %d", n2, n1, n3);
    else if(n3 > n1 && n3 > n2)
        printf("O numero %d e maior que %d %d", n3, n1, n2);
    return 0;
}
