#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3, result;

    printf("Insira o primeiro valor: ");
    scanf("%d", &number1);
    printf("Insira o segundo valor: ");
    scanf("%d", &number2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &number3);

    result = (number1 * number1) + (number2 * number2) + (number3 * number3);

    printf("a soma dos quadrados dos numeros e: %d", result);
    return 0;
}
