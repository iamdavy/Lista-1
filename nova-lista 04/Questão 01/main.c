#include <stdio.h>
#include <stdlib.h>
/*Implemente uma fun��o que receba um n�mero inteiro (N) e retorne a soma dos n�meros naturais
e inteiros de 1 � N. */

int soma(int n){ //declarando a fun��o

    int i, soma = 0; //variaveis locais

    for(i = 1; i <= n; i++){
        soma+=i;
    }
return soma;
}

int main()
{
    int numero;
        printf("Digite um numero: ");
            scanf("%d", &numero);

    printf("Soma e: %d \n", soma(numero)); //declara a variavel que recebeu o numero


    return 0;
}
