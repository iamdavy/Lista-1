#include <stdio.h>
#include <stdlib.h>
/*Para v�rios tributos a base de c�lculo � o sal�rio m�nimo. Fazer um algoritmo que leia o valor do
sal�rio m�nimo e o valor do sal�rio de uma pessoa. Calcular e exibir quantos sal�rios m�nimos essa
pessoa ganha. (Sal�rio m�nimo � R$ 954,00.)*/
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
