#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcoes;
    float numero1, numero2, resultado;

    printf("-------MENU-------\n");
    printf("1) Soma\n");
    printf("2) Subtracao\n");
    printf("3) Divisao\n");
    printf("4) Multiplicacao\n");
    printf("\nInsira sua opcao: ");

    scanf("%d", &opcoes);

    switch(opcoes){

    case 1:
        printf("Insira dois numeros para fazer uma soma: \n");
        scanf("%f%f", &numero1, &numero2);
        printf("resultado: %.f", numero1 + numero2);
        break;

     case 2:
        printf("Insira dois numeros para fazer a subtracao: \n");
        scanf("%f%f", &numero1, &numero2);
        printf("resultado: %.f", numero1 - numero2);
        break;

     case 3:
        printf("Insira dois numeros para fazer uma divisao: \n");
        scanf("%f%f", &numero1, &numero2);
        printf("resultado: %.1f", numero1 / numero2);
        break;

     case 4:
        printf("Insira dois numeros para fazer uma multiplicacao: \n");
        scanf("%f%f", &numero1, &numero2);
        printf("resultado: %.f", numero1 * numero2);
        break;


    }
    return 0;
}
