#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, sucessor, antecessor;

    printf("Insira o numero inteiro: ");
    scanf("%d", &numero);

    sucessor = numero * 3 + 1;
    antecessor = numero * 2 - 1;

    printf("a soma e: %d", sucessor + antecessor);
    return 0;
}
