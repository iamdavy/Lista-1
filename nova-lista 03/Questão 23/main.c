#include <stdio.h>
#include <stdlib.h>
/*Crie um algoritmo que atualiza a senha. O usuario digitara a nova senha, depois deverá repetir a
nova senha. Caso a nova senha repetida não seja igual à primeira senha, mostre que as senhas não
conferem e peça que o usuario digite a nova senha mais uma vez, repetindo o processo até que o
usuario digite a nova senha duas vezes iguais. */

int main()
{

    int senha, novaSenha;

    printf("Digite sua nova senha: \n");
    scanf("%d", &senha);

    while (senha != novaSenha)
    {

        printf("Digite sua senha novamente: \n");
        scanf("%d", &novaSenha);

        if (novaSenha == senha)
        {
            printf("Senha cadastrada");
            return 0;
        }
        else
            printf("Senhas nao conferem, digite novamente. \n");
    }
}
