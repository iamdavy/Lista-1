#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que leia 5 n�meros e informe o maior n�mero.*/
int main()
{
    int cont = 1;
    int numero, maior, menor;

    while(cont <= 5){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if(cont == 1){
            maior = numero;

        }
        else if(numero > maior){
            maior = numero;
        }
        cont++;
    }
    printf("O maior numero e: %d", maior);

    return 0;
}
