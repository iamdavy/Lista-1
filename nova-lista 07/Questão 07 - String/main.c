#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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

int contaLetraMaiuscula(char str[]){
    int i, maisucula = 0;

    for(i = 0; str[i] != '\0'; i++)
     if(isupper(str[i]) != 0)
        maisucula++;

    return maisucula;
}

int contaCaracterEspecial(char str[]){
    int i, cont = 0;

    for(i = 0; str[i] != '\0'; i++){
        if(ispunct(str[i]) != 0)
        cont++;
    }

    return cont;
}

int verificaSenha(char str[]){

    int tam = strlen(str);

    if(tam < 6 || tam > 12){
        printf("Senha invalida");
        return 0;}

    if(contaDigito(str) == 0){
        printf("Senha invalida");
        return 0;}

    if(contaLetraMaiuscula(str) == 0){
        printf("Senha invalida");
        return 0;}

    if(contaCaracterEspecial(str) == 0){
        printf("Senha invalida");
        return 0;}

    printf("Senha valida");


}
int main()
{
    char senha[12];

    printf("Insira uma senha que tenha no minimo: \n");
    printf("6 a 12 caracteres \n");
    printf("um digito \n");
    printf("uma letra maiuscula \n");
    printf("um caractere especial \n\n");
    scanf("%[^\n]", senha);

    verificaSenha(senha);
    return 0;
}
