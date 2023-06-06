#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, tempoServico;

    printf("Insira sua idade e na frente seu tempo de servico: \n");
    scanf("%d%d", &idade, &tempoServico);

    if(idade >= 65 || tempoServico >= 30){
        printf("Pode se aposentar");
    }
    else if(idade >= 60 && tempoServico >= 25){
        printf("Pode se aposentar");
    }
    else
        printf("Nao pode se aposentar");
    return 0;
}
