#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, pesoideal;
    char sexo;

    printf("Insira a sua altura: ");
    scanf("%f", &altura);
    printf("Insira seu sexo M ou H: ");
    scanf("%s", &sexo);

    if(sexo == 'H', sexo == 'h'){
        pesoideal = (72.7 * altura) - 58;
        printf("Seu peso ideal e: %.1f", pesoideal);
    }
    else if(sexo == 'M', sexo == 'm'){
        pesoideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e: %.1f", pesoideal);
    }
    else
        printf("Peso ou altura invalida");
    return 0;
}
