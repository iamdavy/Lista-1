#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int main() {

    setlocale(LC_ALL, "Portuguese");

    struct dma data1, data2;
    int dias_totais = 0;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    int dias_no_mes = 0;
    switch (data1.mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias_no_mes = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias_no_mes = 30;
            break;
        case 2:
            if ((data1.ano % 4 == 0 && data1.ano % 100 != 0) || (data1.ano % 400 == 0))
                dias_no_mes = 29;
            else
                dias_no_mes = 28;
            break;
        default:
            printf("Dia inválido para o mês.\n");
            return 1;
    }

    if (data1.dia < 1 || data1.dia > dias_no_mes) {
        printf("Dia inválido para o mês.\n");
        return 1;
    }

    switch (data2.mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias_no_mes = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias_no_mes = 30;
            break;
        case 2:
            if ((data2.ano % 4 == 0 && data2.ano % 100 != 0) || (data2.ano % 400 == 0))
                dias_no_mes = 29;
            else
                dias_no_mes = 28;
            break;
        default:
            printf("Dia inválido para o mês.\n");
            return 1;
    }

    if (data2.dia < 1 || data2.dia > dias_no_mes) {
        printf("Dia inválido para o mês.\n");
        return 1;
    }

    if(data1.ano > data2.ano){
        struct dma temp = data1;
        data1 = data2;
        data2 = temp;
    }

    while (data1.dia != data2.dia || data1.mes != data2.mes || data1.ano != data2.ano) {
        dias_totais++;
        data1.dia++;

        if (data1.dia > dias_no_mes) {
            data1.dia = 1;
            data1.mes++;
            if (data1.mes > 12) {
                data1.mes = 1;
                data1.ano++;
            }
            // Verifica os dias no novo mês
            switch (data1.mes) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    dias_no_mes = 31;
                    break;
                case 4: case 6: case 9: case 11:
                    dias_no_mes = 30;
                    break;
                case 2:
                    if ((data1.ano % 4 == 0 && data1.ano % 100 != 0) || (data1.ano % 400 == 0))
                        dias_no_mes = 29;
                    else
                        dias_no_mes = 28;
                    break;
                default:
                    printf("Dia inválido para o mês.\n");
                    return 1;
            }
        }
    }

    printf("O número de dias entre as duas datas é: %d\n", dias_totais);

    return 0;
}
