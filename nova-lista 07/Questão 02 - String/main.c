#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qntsVogais(char p[]){
    int i, quant = 0;

    i = 0;

     while(p[i] != '\0'){
        if(p[i] == 'b' || p[i] == 'c' || p[i] == 'd' ||
           p[i] == 'f' || p[i] == 'g' || p[i] == 'h' ||
           p[i] == 'j' || p[i] == 'k' || p[i] == 'l' ||
           p[i] == 'm' || p[i] == 'n' || p[i] == 'p' ||
           p[i] == 'q' || p[i] == 'r' || p[i] == 's' ||
           p[i] == 't' || p[i] == 'v' || p[i] == 'w' ||
           p[i] == 'x' || p[i] == 'y' || p[i] == 'z'){

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

    printf("Numero de consoantes e: %d \n", qntsVogais(palavra));
    return 0;
}
