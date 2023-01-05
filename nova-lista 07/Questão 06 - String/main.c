#include <stdio.h>
#include <stdlib.h>

int contaDigito(char str[]){
    int i, digito = 0;

    for(i = 0; str[i] != '\0'; i++){
     if(str[i] == '0' || str[i] == '1' || str[i] == '2' ||
        str[i] == '3' ||str[i] == '4' || str[i] == '5' ||
        str[i] == '6' ||str[i] == '7' || str[i] == '8' ||
        str[i] == '9')

        digito++;
    }

    return digito;
}
int main()
{
    char digito[20];

    printf("Informe os digitos: ");
    scanf("%[^\n]", digito);

    printf("Tem %d digitos", contaDigito(digito));
    return 0;
}
