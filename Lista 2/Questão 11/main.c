#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, emprestimo, porcentagem;

    printf("Insira o valor total do seu salario: ");
    scanf("%f", &salario);

    printf("Insira o valor da prestacao do emprestimo: ");
    scanf("%f", &emprestimo);

    porcentagem = salario *0.2;

    if(emprestimo > porcentagem){
        printf("Emprestimo nao concedido");
    }
    else
        printf("Emprestimo concedido");
    return 0;
}
