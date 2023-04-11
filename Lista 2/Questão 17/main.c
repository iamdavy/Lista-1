#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;

    printf("Insira o dia da semana 1 a 7: ");
    scanf("%d", &dia);

    if(dia <= 7){
    switch(dia){
        case 1:
        printf("Segunda-Feira");
        break;
          case 2:
        printf("Terca-Feira");
        break;
          case 3:
        printf("Quarta-Feira");
        break;
          case 4:
        printf("Quinta-Feira");
        break;
          case 5:
        printf("Sexta-Feira");
        break;
          case 6:
        printf("Sabado");
        break;
           case 7:
        printf("Domingo");
        break;
    }
}
    else
        printf("Numero invalido");
    return 0;
}
