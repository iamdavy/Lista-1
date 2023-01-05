#include <stdio.h>
#include <stdlib.h>
/* Leia um número e mostre o seu fatorial. Exemplo, fatorial de 5! = 5 × 4 × 3 × 2 × 1 = 120 */
int main()
{
    int i;
    float num, fatorial = 1;

    printf("Digite um numero: ");
        scanf("%f", &num);

    for(i = num; i >= 1; i--){

        fatorial *= i;
    }
        printf("o fatorial de %.1f = %.1f", num, fatorial);
    return 0;
}
