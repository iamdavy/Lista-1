#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroInicial, numero1, numero2, numero3;

   printf("Digite um numero de 3 digitos positivo: ");
   scanf("%d", &numeroInicial);

   if (numeroInicial > 10) {
        numero1 = numeroInicial % 10;
        numeroInicial = numeroInicial / 10;
        numero2 = numeroInicial % 10;
        numeroInicial = numeroInicial / 10;
        numero3 = numeroInicial % 10;
        numeroInicial = numeroInicial / 10;
   }

   printf("\n%d%d%d \n", numero1, numero2, numero3);

    return 0;
}
