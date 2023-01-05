#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverteString(char str1[], char str2[], int tamanho){

    int i, j = 0;

    for(i = tamanho - 1; i >= 0; i--){
        str1[j] = str2[i];
        j++;
    }

}

int verificaInverso(char str1[], char str2[]){

    if(strlen(str1) != strlen(str2)){
        return 0; //falso
    }else{
        char copiaStr1[strlen(str1)];
        strcpy(copiaStr1, str1);

        inverteString(copiaStr1, str2, strlen(str1));

        for(int i = 0; i < strlen(str1); i++){
            if(copiaStr1[i] == str1[i]){
                return 1; //verdadeiro
            }else{
                return 0;
            }
        }
    }

}
int main()
{
    char string1[10] = "livres";
    char string2[10] = "servil";

    printf("%d", verificaInverso(string1, string2));
}
