#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*isupper retorna valor verdadeiro se c for
uma letra maiúscula e 0 caso contrário*/

int qntsMaiusculas(char str[]){
    int i, quant = 0;

    for(i = 0; str[i] != '\0'; i++)
     if(isupper(str[i]) != 0)
        quant++;

     return quant;
}
int main()
{
    char palavra[20];

    printf("Informe uma palavra: ");
    scanf("%[^\n]", palavra);

    printf("Numero de maiusculas e %d \n", qntsMaiusculas(palavra));
    return 0;
}
