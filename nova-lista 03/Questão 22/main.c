#include <stdio.h>
#include <stdlib.h>
/*Desenvolva um programa que tenha o seguinte menu e realize os c�lculos necess�rios de acordo com
a op��o do menu escolhida. O programa encerrar� apenas quando o usu�rio escolher a op��o de
Sair*/

int main()
{
    int num, opc;
    float result;

    printf("Digite um numero: \n");
    scanf("%d", &num);


    while(opc != 4){
        printf("\nEscolha uma opcao: \n");
        printf("1- triplo do numero \n");
        printf("2- 15 porcento do numero \n");
        printf("3- cubo do numero \n");
        printf("4- sair \n \n");

        scanf("%d", &opc);

        if(opc == 1){
            printf("resultado: %d \n", num * 3);
        }
        else if(opc == 2){
            result = num * 0.15;
            printf("resultado: %.2f \n", result);
        }
        else if(opc == 3){
            printf("resultado: %d \n", num * num * num);
        }
        else{
            printf("Encerrando o programa \n");
            return 0;
        }
    }
}
