#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int valores[TAMANHO];

    printf("Digite 10 valores numericos:\n");
    for(int i = 0; i < TAMANHO; i++) {
        scanf("%d", &valores[i]);
    }

    // Ordenar os valores em ordem crescente usando o algoritmo de seleção
    for(int i = 0; i < 9; i++) {
        int valorMin = i;
        for(int j = i+1; j < TAMANHO; j++) {
            if(valores[j] < valores[valorMin]) { // Encontra o menor valor restante
                valorMin = j; // Atualiza o índice do menor valor
            }
        }
        // Troca o menor valor encontrado com o valor na posição atual
        int temp = valores[valorMin];
        valores[valorMin] = valores[i];
        valores[i] = temp;
    }


    printf("Os valores em ordem crescente sao:\n");
    for(int i = 0; i < TAMANHO; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    return 0;
}
