#include <stdio.h>
#include <stdlib.h>
/*Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava
dirigindo nela. Mostre a multa que o motorista receberá, sabendo que são pagos:
-50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex.: velocidade
máxima: 50km/h; motorista a 60km/h ou a 56km/h);
-100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
-200 reais, se estiver acima de 30km/h da velocidade permitida.*/
int main()
{
    int velocidadeMotorista, velocidadePista, media;

    printf("Digite a velocidade que o motorista estava: ");
        scanf("%d", &velocidadeMotorista);
    printf("Digite a velocidade maxima permitida na pista: ");
        scanf("%d", &velocidadePista);

    media = velocidadeMotorista - velocidadePista;

    if(media <= 10)
        printf("O motorista devera pagar 50 reais de multa.");
    else if(media >= 11 && media <= 30)
        printf("O motorista devera pagar 100 reais de multa.");
    else
        printf("O motorista devera pagar 200 reais de multa.");

    return 0;
}
