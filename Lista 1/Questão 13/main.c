#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milhas, quilometros;

    printf("Insira a distancia em quilometros: ");
    scanf("%f", &quilometros);

    milhas = quilometros / 1.61;

    printf("A distancia em milhas e %.1f", milhas);
    return 0;
}
