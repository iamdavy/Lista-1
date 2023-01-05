#include <stdio.h>
#include <stdlib.h>
/*Os principais c�digos de estado no protocolo HTTP est�o na tabela abaixo. Os estados informam
o resultado de uma requisi��o em um servidor Web. Fa�a um programa que receba um c�digo, e
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
