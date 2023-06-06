#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 5

int main()
{
    int matriz[L][C], i, j, valor;
    int flag = 0;

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("Digite o valor da posicao[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Insira o valor a ser buscado: ");
    scanf("%d", &valor);

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(matriz[i][j] == valor){
                printf("O valor %d foi encontrado na posicao[%d][%d]\n", valor, i, j);
                flag = 1;
                break;
            }
        }
        if(flag){
            break;
        }
    }
        if(!flag){
            printf("O valor %d nao foi encontrado na matriz\n", valor);
        }

    return 0;
}
