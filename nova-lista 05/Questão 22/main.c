#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 8

/*Desenvolva uma função que receba um vetor e um valor, e retorne quantas vezes o valor aparece no
vetor.*/

int valorVet(int vet[], int valor){
    int i, cont = 0;

    for(i = 0; i < 8; i++){
        if(valor==vet[i]){
            cont++;
        }
    }
    return cont;

}
int main()
{
    int numeros[8] = {2, 3, 5, 6, 2, 4, 2, 7};
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    printf("\nO valor repete: %d", valorVet(numeros, valor));
    return 0;
}
