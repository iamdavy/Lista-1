#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int contCaracterEspecial(char str[]){
    int i, cont = 0;

    for(i = 0; str[i] != '\0'; i++){
        if(ispunct(str[i]) != 0)
        cont++;
    }

    return cont;
}
int main()
{
    char palavra[20];

    printf("Informe uma palavra: ");
    scanf("%[^\n]", palavra);

    printf("Tem %d caracteres especiais", contCaracterEspecial(palavra));
    return 0;
}
