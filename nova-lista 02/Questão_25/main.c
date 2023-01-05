#include <stdio.h>
#include <stdlib.h>
/*Um determinado imposto � definido com base no sal�rio do trabalhador, de acordo com a tabela
abaixo. Fa�a um programa que receba o sal�rio de uma pessoa e determine o valor a ser pago no
imposto e quanto sobrar� do sal�rio.*/
int main()
{
    float salario;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if(salario < 1000)
        printf("Nao paga imposto");
    else if(salario >= 1000 && salario < 2500)
        printf("Voce tem que pagar R$%.2f de imposto. Voce ainda tem %.2f de salario", salario*0.1, salario * -0.1 + salario);
    else if(salario >= 2500 && salario < 4000)
        printf("Voce tem que pagar R$%.2f de imposto. Voce ainda tem %.2f de salario", salario*0.125, salario * -0.125 + salario);
    else
        printf("Voce tem que pagar R$%.2f de imposto. Voce ainda tem %.2f de salario", salario*0.16, salario * -0.16 + salario);
    return 0;
}
