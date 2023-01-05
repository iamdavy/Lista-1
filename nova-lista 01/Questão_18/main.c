#include <stdio.h>
#include <stdlib.h>
/*A prefeitura de Crateús abriu uma linha de crédito para os funcionários. O valor máximo da
prestação não poderá ultrapassar 30% do salário bruto. Escreva um algoritmo que receba o salário
bruto e o valor máximo da prestação.
*/
int main()
{
    int salario;
    printf("Digite o valor do seu salario bruto: \n");
    scanf("%d", &salario);

    printf("O valor maximo da prestacao: %.2f \n", salario * 0.3);
    return 0;
}
