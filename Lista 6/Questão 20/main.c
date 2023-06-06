#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char string1[21];
    char string2[21];
    int opcao, tamanho, posicao;

    do {
        printf("----- MENU -----\n");
        printf("(1) Ler uma string S1\n");
        printf("(2) Imprimir o tamanho da string S1\n");
        printf("(3) Comparar as strings S1 e S2\n");
        printf("(4) Concatenar as strings S1 e S2\n");
        printf("(5) Imprimir a string S1 de forma reversa\n");
        printf("(6) Contar a ocorrência de um caractere na string S1\n");
        printf("(7) Substituir a primeira ocorrência de um caractere C1 por um caractere C2 em S1\n");
        printf("(8) Verificar se a string S2 é substring de S1\n");
        printf("(9) Retornar uma substring de S1\n");
        printf("(0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

        switch (opcao) {
            case 0:
                printf("Encerrando o programa...\n");

                break;
            case 1:
                printf("Digite a string S1 (max 20 caracteres): ");
                fgets(string1, sizeof(string1), stdin);//amarzenado no buffer, tamanho maximo, indica as caracteres entrada padrao

                break;
            case 2:
                tamanho = 0;
                for (int i = 0; i < strlen(string1); i++) { //strlen funcao de tamanho
                    if (string1[i] != ' ') {
                        tamanho++;
                    }
                }
                printf("Tamanho da string S1 (sem espaços em branco): %d\n", tamanho);

                break;
            case 3:
                printf("Digite a string S2 (max 20 caracteres): ");
                fgets(string2, sizeof(string2), stdin);
                if (strcmp(string1, string2) == 0) { //strcmp funcao de comparacao
                    printf("As strings S1 e S2 sao iguais.\n");
                } else {
                    printf("As strings S1 e S2 sao diferentes.\n");
                }

                break;
            case 4:
                printf("Digite a string S2 (max 20 caracteres): ");
                fgets(string2, sizeof(string2), stdin);
                strcat(string1, string2); //strcat funcao de concatenacao
                printf("Strings concatenadas: %s\n", string1);

                break;
            case 5:
                printf("String S1 reversa: ");
                for (int i = strlen(string1) - 1; i >= 0; i--) {
                    printf("%c", string1[i]);
                }
                printf("\n");

                break;
            case 6:
                printf("Digite o caractere a ser buscado na string S1: ");
                char caractere;
                scanf(" %c", &caractere);
                int contador = 0;
                for (int i = 0; i < strlen(string1); i++) {
                    if (string1[i] == caractere) {
                        contador++;
                    }
                }
                printf("O caractere '%c' aparece %d vez(es) na string S1.\n", caractere, contador);

                break;
            case 7:
                printf("Digite o caractere C1 a ser substituído: ");
                char c1;
                scanf(" %c", &c1);
                getchar();
                printf("Digite o caractere C2 para substituir C1: ");
                char c2;
                scanf(" %c", &c2);
                int encontrado = 0;
                for (int i = 0; i < strlen(string1); i++) {
                    if (string1[i] == c1) {
                        string1[i] = c2;
                        encontrado = 1;
                        break;
                    }
                }
                if (encontrado) {
                    printf("A primeira ocorrencia de '%c' foi substituida por '%c'.\n", c1, c2);
                } else {
                    printf("Caractere '%c' nao encontrado na string S1.\n", c1);
                }

                break;
            case 8:
                printf("Digite a string S2 a ser verificada: ");
                fgets(string2, sizeof(string2), stdin);
                if (strstr(string1, string2) != NULL) { //strstr verifica se ha uma substring
                    printf("A string S2 e uma substring de S1.\n");
                } else {
                    printf("A string S2 nao e uma substring de S1.\n");
                }

                break;
            case 9:
                printf("Digite a posicao inicial para a substring: ");
                scanf("%d", &posicao);
                printf("Digite o tamanho da substring: ");
                scanf("%d", &tamanho);
                if (posicao < 0 || posicao >= strlen(string1) || tamanho < 0 || posicao + tamanho > strlen(string1)) {
                    printf("Erro: posicao ou tamanho invalido.\n");
                } else {
                    printf("Substring: ");
                    for (int i = posicao; i < posicao + tamanho; i++) {
                        printf("%c", string1[i]);
                    }
                    printf("\n");
                }
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }

        printf("\n");

    } while (opcao != 0);

    return 0;
}
