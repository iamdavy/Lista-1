#include <stdio.h>
#include <stdlib.h>

int main()
{
   int metrosCubicos, litros;

   printf("Insira o volume em metros cubicos: ");
   scanf("%d", &metrosCubicos);

   litros = 1000 * metrosCubicos;

   printf("O volume em litro e: %d", litros);

    return 0;
}
