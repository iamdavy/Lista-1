#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

int main()
{
    int i, vet[TAMANHO];
    int soma = 0;

    printf("Informe 6 valores:\n");
    for(i = 0; i < TAMANHO; i++){
        scanf("%d", &vet[i]);
    soma = vet[0] + vet[1] + vet[5];
    }
    printf("A soma: %d\n", soma);

    printf("Insira um valor pra modificar o quarto vetor: \n");
    scanf("%d", &vet[4]);

    for(i = 0; i < TAMANHO; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
