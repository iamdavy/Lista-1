#include <stdio.h>
#include <stdlib.h>
/*Para vários tributos a base de cálculo é o salário mínimo. Fazer um algoritmo que leia o valor do
salário mínimo e o valor do salário de uma pessoa. Calcular e exibir quantos salários mínimos essa
pessoa ganha. (Salário mínimo é R$ 954,00.)*/
int main()
{
    float salarioMin, salarioPessoa, salarioResult;

    salarioMin = 954.00;

    printf("Digite o seu salario: \n");
    scanf("%f", &salarioPessoa);

    salarioResult = salarioPessoa/salarioMin;

    printf("Voce ganha aproximadamente %.1f salarios minimos", salarioResult);

    return 0;
}
