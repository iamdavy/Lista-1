#include <stdio.h>
#include <stdlib.h>
/*Os principais códigos de estado no protocolo HTTP estão na tabela abaixo. Os estados informam
o resultado de uma requisição em um servidor Web. Faça um programa que receba um código, e
mostre a respectiva mensagem de estado.*/

int main()
{
    int codigo;
    printf("Escreva o codigo: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 200: printf("OK");
            break;
        case 401: printf("Nao autorizado");
            break;
        case 403: printf("Acesso Negado");
            break;
        case 404: printf("Nao encotrado");
            break;
        case 409: printf("Conflito");
            break;
        default: printf("Codigo Invalido");


    }


    return 0;
}
