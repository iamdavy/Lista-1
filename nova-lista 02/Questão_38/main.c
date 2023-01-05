#include <stdio.h>
#include <stdlib.h>
/*Implemente um programa para perguntar e informar se o usuário respondeu corretamente ou não
a seguinte pergunta:*/
int main()
{
    char questao;

    printf("O resultado da equacao 2 + 5 * 10 + 5 e: \n");
    printf("a. 75 \n");
    printf("b. 70 \n");
    printf("c. 57 \n");
    printf("d. 53 \n \n");
    scanf("%c", &questao);

        switch(questao){
            case 'a': printf("Errado");
                break;

            case 'b': printf("Errado");
                break;

            case 'c': printf("Correto");
                break;

            case 'd': printf("Errado");
                break;

            default: printf("Apenas as letras do enunciado");

    }
    return 0;
}
