#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia as três notas de um aluno, calcule a média final e escreva a situação
do aluno na disciplina de acordo com a média final: Reprovado (0 à 3.9), Prova Final (4 à 6.9) e
Aprovado (7 à 10).*/
int main()
{
    float nota1, nota2, nota3, media;

    printf("Escreva a primeira nota: ");
    scanf("%f", &nota1);
    printf("Escreva a segunda nota: ");
    scanf("%f", &nota2);
    printf("Escreva a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media <= 3.9)
        printf("Reprovado");
    else if(media >= 4 && media <= 6.9)
        printf("Prova Final");
    else
        printf("Aprovado");

    return 0;
}
