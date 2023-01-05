#include <stdio.h>
#include <stdlib.h>
/*Implemente um programa que leia um número real (que possui casa decimal), e escreva na tela se
a metade do número lido é maior ou menor que 15.*/
int main()
{
    int num15 = 15;
    float numero, metade;

    printf("Digite um numero real \n");
    scanf("%f", &numero);

    metade = numero / 2;

    if(metade > 15){
        printf("A metade de %.1f e maior que 15", numero);
    }
    else{
        printf("A metade de %.1f e menor que 15", numero);
    }
    return 0;
}
