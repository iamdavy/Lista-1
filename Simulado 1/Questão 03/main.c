#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma = 0;
    int menor = 6000, maior = 0;
    /*A variável menor é inicializada com um valor alto para garantir que
    o primeiro número divisível por 5 e 7 encontrado seja registrado como o menor */

    for(int i = 1; i < 6000; i++){
        if(i % 5 == 0 && i % 7 == 0){
            soma+= i;
            if(i < menor){
                menor = i;
            }
            if(i > maior){
                maior = i;
            }
        }
    }
    printf("Menor numero divisivel por 5 e 7: %d\n", menor);
    printf("Maior numero divisivel por 5 e 7: %d\n", maior);
    printf("Soma dos numeros divisiveis por 5 e 7: %d\n", soma);
    return 0;
}
