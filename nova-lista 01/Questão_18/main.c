#include <stdio.h>
#include <stdlib.h>
/*A prefeitura de Crate�s abriu uma linha de cr�dito para os funcion�rios. O valor m�ximo da
presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Escreva um algoritmo que receba o sal�rio
bruto e o valor m�ximo da presta��o.
*/
int main()
{
    int salario;
    printf("Digite o valor do seu salario bruto: \n");
    scanf("%d", &salario);

    printf("O valor maximo da prestacao: %.2f \n", salario * 0.3);
    return 0;
}
