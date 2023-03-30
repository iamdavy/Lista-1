#include <stdio.h>
#include <stdlib.h>

int main()
{
   float metrosCubicos, litros;

   printf("Insira o volume litro: ");
   scanf("%f", &litros);

   metrosCubicos = litros / 1000;

   printf("O volume em metros cubicos e: %.3f", metrosCubicos);

    return 0;
}
