#include <stdio.h>
#include <stdlib.h>

int main()
{
    float trabalhoLab, avaliacaoSemestral, exameFinal, resultado;

    printf("Insira a nota do trabalho do laboratorio: ");
    scanf("%f", &trabalhoLab);
    printf("\nInsira a nota da avaliacao semestral: ");
    scanf("%f", &avaliacaoSemestral);
    printf("\nInsira a nota do exame final: ");
    scanf("%f", &exameFinal);

    resultado = ((trabalhoLab * 2) + (avaliacaoSemestral * 3) + (exameFinal * 5)) / (2 + 3 + 5);

    if(resultado <= 2.9){
        printf("A nota do aluno foi: %.1f aluno esta reprovado", resultado);
    }
    else if(resultado > 2.9 && resultado <= 4.9){
        printf("A nota do aluno foi: %1.f aluno esta de recuperacao", resultado);
    }
    else
        printf("A nota do aluno foi: %1.f aluno esta aprovado", resultado);

    return 0;
}
