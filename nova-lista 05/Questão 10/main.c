#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 7

/*Dado o vetor [4, 6, 15, 8, 4, 7, 5], informe a soma dos elementos do vetor. Utilize obrigatoriamente
a função criada na questão anterior */

int somaVet(int vet[], int tamanho){

    int i, soma = 0;

    for(i = 0; i < tamanho; i++){
        soma+= vet[i];
    }

return soma;

}


int main()
{
    int numeros[TAMANHO] = {4, 6, 15, 8, 4, 7, 5};

    printf("Soma: %d \n", somaVet(numeros, TAMANHO));


    return 0;
}
