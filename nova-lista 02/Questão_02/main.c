#include <stdio.h>
#include <stdlib.h>
/*Implemente um algoritmo que leia um n�mero inteiro e informe se o n�mero � maior que 50.*/
int main()
{
    int num;
    printf("Digite um numero inteiro \n");
    scanf("%d", &num);

    if(num > 50){
        printf("O numero %d e maior que 50",  num);
    }
     else if(num = 50){
        printf("O numero %d e igual  50", num);
    }
    else{
        printf("O numero %d nao e maior que 50", num);
    }
    return 0;
}
