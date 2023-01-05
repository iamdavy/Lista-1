#include <stdio.h>
#include <stdlib.h>
/*Desenvolva um programa que leia um número inteiro e positivo n. Apresente os números inteiros
de 1 a n.*/
int main()
{
    int i, num;
    printf("Digite um numero inteiro e positivo: ");
       scanf("%d",&num);
       for(i = 1; i <= num; i++){
        if(num > 0)
            printf("%d ", i);
       }
    return 0;
}
