#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    printf("O antecessor dele e %d e seu sucessor e %d", numero - 1, numero + 1);
    return 0;
}
