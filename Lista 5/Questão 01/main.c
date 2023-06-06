#include <stdio.h>
#include <stdlib.h>
#define L 4
#define C 4

int main()
{
    int matriz[L][C];
    int i, j;

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("\nDigite a matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(matriz[i][j] > 10){
                printf("\nmatriz[%d][%d]", i, j);
            }
        }
    }

    return 0;
}
