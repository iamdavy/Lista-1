#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano, bissexto = 0;

    printf("Insira a data: ");
    scanf("%d%d%d", &dia, &mes, &ano);

    /*os anos bissextos são aqueles múltiplos de 4, ou seja, a cada quatro anos temos um ano bissexto.
    Por outro lado, esses anos não são múltiplos de 100. exceto os múltiplos de 400*/

    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        bissexto++;
        //(bissexto = 1) = Ano bissexto
        //(bissexto = 0) = Ano não bissexto
    }
    if(bissexto == 0){
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31 && mes <= 12){ // meses com 31 dias
            printf("\nesta data e valida");
        }
         else if (dia > 31 || mes > 12 || mes < 1 || dia < 1 || ano < 1){ //verifica se a data é valida
            printf("\nesta data e invalida\n");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30 && mes<=12){ // meses com 30 dias
            printf("\nesta data e valida\n");
        }
        else if (mes == 2 && dia <=28 && mes<=12){ //verificação de fev, mes com 28 dias em anos n bissexto
            printf("\nesta data e valida\n");
        }
        else if (mes == 2 && dia > 28){ //verficação dias de fev
            printf("\nesta data nao e valida\n");
        }
    }

     else if (bissexto==1)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31 && mes<=12){
            printf("\nesta data e valida\n");
        }
        else if (dia > 31 || mes > 12 || mes < 1 || dia < 1 || ano < 1){
            printf("\nesta data e invalida\n");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30 && mes<=12){
            printf("\nesta data e valida\n");
        }
        else if (mes == 2 && dia <=29 && mes<=12){ // verificação de fev, mes com 29 dias em anos bissexto
            printf("\nesta data e valida\n");
        }
        else if (mes == 2 && dia > 29){ // verficação dias de fev
            printf("\nesta data nao e valida\n");
        }
    }
    return 0;
}
