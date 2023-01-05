#include <stdio.h>
#include <stdlib.h>
/*Crie uma função que receba um número inteiro (N) e retorne a média dos números de 1 à N. É
obrigatória a utilização da função criada na questão anterior. */


int soma(int n){         //função responsavel pela soma
    int i, soma = 0;

    for(i = 1; i <= n; i++){

        soma+= i;

    }
    return soma;
}

float media(int n){         //função responsavel pela media

    return soma(n) / (float)n;
}

int main()                  //função responsavel por receber o n e printar o resultado
{
    int numero;

    printf("numero: ");
    scanf("%d", &numero);

    printf("Media e: %.2f \n", media(numero));
    return 0;
}
