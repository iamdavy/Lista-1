#include <stdio.h>
#include <stdlib.h>
/*Crie uma fun��o que receba um n�mero inteiro (N) e retorne a m�dia dos n�meros de 1 � N. �
obrigat�ria a utiliza��o da fun��o criada na quest�o anterior. */


int soma(int n){         //fun��o responsavel pela soma
    int i, soma = 0;

    for(i = 1; i <= n; i++){

        soma+= i;

    }
    return soma;
}

float media(int n){         //fun��o responsavel pela media

    return soma(n) / (float)n;
}

int main()                  //fun��o responsavel por receber o n e printar o resultado
{
    int numero;

    printf("numero: ");
    scanf("%d", &numero);

    printf("Media e: %.2f \n", media(numero));
    return 0;
}
