#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, resultado;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);

    resultado = ((1 * nota1) + (1 * nota2) + (2 * nota3)) / 3;

    if(resultado >= 60.0){
        printf("\naprovado");
    }
    else
        printf("\nreprovado");

    return 0;
}
