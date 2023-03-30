#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundosInicial,segundos, minutos, horas, resultado;

    printf("Insira os segundos: ");
    scanf("%d", &segundosInicial);

    horas = segundosInicial / 3600;
    resultado = segundosInicial % 3600;
    minutos = resultado / 60;
    segundos = resultado % 60;

    printf("%d:%d:%d", horas, minutos, segundos);
    return 0;
}
