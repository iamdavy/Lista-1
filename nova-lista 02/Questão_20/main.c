#include <stdio.h>
#include <stdlib.h>
/*Escrever um algoritmo que leia dois números e mostre o maior deles ou se eles são iguais.
*/
int main()
{
    int n1, n2;
    printf("Digite dois numeros \n");
    printf("primeiro numero: ");
    scanf("%d", &n1);
    printf("segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2)
        printf("%d e maior que %d", n1, n2);
    else if(n2 > n1)
        printf("%d e maior que %d", n2, n1);
    else
        printf("Os numeros sao iguais");
    return 0;
}
