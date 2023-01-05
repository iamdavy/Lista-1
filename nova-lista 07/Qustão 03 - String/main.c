#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void senha(char str[]){
    int i = 0, consoantes = 0, vogais = 0;

    int tam = strlen(str);

    if(tam < 4 || tam > 8){
        printf("Tamanho invalido");
        return 0;
    }

    while(str[i] != '\0'){
     if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
        str[i] != 'o' && str[i] != 'u' && str[i] != 'A' &&
        str[i] != 'E' && str[i] != 'I' && str[i] != 'O' &&
        str[i] != 'U'){

        consoantes++;
           }
      i++;
    }
    i = 0;

    while(str[i] != '\0'){
     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u' || str[i] == 'a' ||
        str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
        str[i] == 'U'){

    vogais++;
        }
    i++;
    }

    if(consoantes >= 2 && vogais >= 2){
        printf("Senha valida");
    }else if(vogais < 2 || consoantes < 2){
        printf("Senha invalida");}

}

int main()
{
    char str[8];

    scanf("%[^\n]", str);

    senha(str);

    return 0;
}
