#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qntsVogais(char p[]){
    int i, quant = 0;

    i = 0;

    while(p[i] != '\0'){
        if(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' ||
           p[i] == 'o' || p[i] == 'u' || p[i] == 'A' ||
           p[i] == 'E' || p[i] == 'I' || p[i] == 'O' ||
           p[i] == 'U'){

        quant++;
    }
    i++;
}
    return quant;
}

int main()
{
    char palavra[20];

    printf("Informe uma palavra: ");
    scanf("%[^\n]", palavra);

    printf("O numero de vogais e %d \n", qntsVogais(palavra));
    return 0;
}
