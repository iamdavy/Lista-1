#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba a altura e o gênero de uma pessoa e calcule o peso de referência
médica (PRM) para essa pessoa. Para homens o peso é dado pela equação P RM = (72.7 ∗ h) − 58;
para mulheres, P RM = (62.1 ∗ h) − 44.7.*/
int main()
{
    int sexo;
    float PRMH, PRMM, altura;

    printf("Digite sua altura e genero: \n");
    printf("Altura em metros: \n");
    scanf("%f",&altura);
    printf("Escolha seu genero entre masculino = 1 e feminino = 2: \n");
    scanf("%d",&sexo);

    PRMM = (62.1 * altura) - 44.7;
    PRMH = (72.7 * altura) - 58;

    if(sexo == 2 )
        printf("O peso referencial para sua altura e: %.1f", PRMM);
    else
        printf("O peso referencial para sua altura e: %.1f",PRMH);


    return 0;
}
