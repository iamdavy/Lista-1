#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milhas, quilometros;

    printf("Insira a distancia em milhas: ");
    scanf("%f", &milhas);

    quilometros = 1.61 * milhas;

    printf("A distancia em quilometros e %.1f", quilometros);
    return 0;
}
