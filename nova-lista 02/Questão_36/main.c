#include <stdio.h>
#include <stdlib.h>
/*Desenvolva um programa que tenha o seguinte menu e realize os cálculos necessários de acordo com
a opção do menu escolhida:*/
int main()
{
    printf("==== MENU ==== \n");
    printf("1. Dobro de um numero \n");
    printf("2. A metade de um numero \n");
    printf("3. Quadrado de um numero \n");
    printf("4. Sair \n");

    int num, opcao;

    printf("\nOpcao: ");
    scanf("%d",&opcao);

    printf("Numero: ");
    scanf("%d", &num);

    switch(opcao){
        case 1: printf("O dobro de %d e: %d", num, num * 2);
            break;
        case 2: printf("A metade de %d e: %d", num, num / 2);
            break;
        case 3: printf("O quadrado de %d e: %d", num, num * num);
            break;
        case 4: printf("Tchau");
            break;
        default: printf("Opcao invalida");
    }

    return 0;
}
