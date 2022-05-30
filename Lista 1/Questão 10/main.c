#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Km, ms;
    printf("Digite um velocidade em Km/h para converter em m/s \n");
    scanf("%f", &Km);

    ms= Km/3.6;

    printf("A velocidade %0.2f Km/h ficou %0.2f m/s \n", Km, ms);
    return 0;
}
