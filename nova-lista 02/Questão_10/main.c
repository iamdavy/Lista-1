#include <stdio.h>
#include <stdlib.h>
/*Leia um n�mero e verifique se ele � par ou �mpar.*/
int main()
{
    int numero;
    printf("Digite um numero \n");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("Esse numero e par");
    }
    else{
        printf("Esse numero e impar");
    }
    return 0;
}
