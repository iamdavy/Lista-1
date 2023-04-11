#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, valorC;

    printf("insira o valor do lado A, lado B e base: \n");
    scanf("%d%d%d", &valorA, &valorB, &valorC);

    if(valorA == valorB && valorA == valorC){
        printf("Triangulo Equilatero");
    }
    else if(valorA == valorB && valorC != valorA){
        printf("Triangulo Isosceles");
    }
    else
        printf("Triangulo Escaleno");
    return 0;
}
