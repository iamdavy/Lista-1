#include <stdio.h>
#include <stdlib.h>
#define L 10
#define C 3

int main()
{
    int notas[L][C];
    int i, j;
    int piorNota1 = 0, piorNota2 = 0, piorNota3 = 0;

    printf("Digite a nota dos 10 alunos nas 3 provas:\n");
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            scanf("%d", &notas[i][j]);
        }
    }

    for(i = 0; i < L; i++) {
      if(notas[i][0] < notas[i][1] && notas[i][0] < notas[i][2]) {
         piorNota1++;
      }
      else if(notas[i][1] < notas[i][0] && notas[i][1] < notas[i][2]) {
         piorNota2++;
      }
      else {
         piorNota3++;
      }
   }


   printf("Numero de alunos com a pior nota na prova 1: %d\n", piorNota1);
   printf("Numero de alunos com a pior nota na prova 2: %d\n", piorNota2);
   printf("Numero de alunos com a pior nota na prova 3: %d\n", piorNota3);

    return 0;
}
