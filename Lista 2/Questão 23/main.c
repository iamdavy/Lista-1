#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, serviceTime;

    printf("Insira a idade e o tempo de servico: ");
    scanf("%d%d", &age, &serviceTime);

    if(age >= 65 || serviceTime >= 30){
        printf("Pode se aposentar");
    }
    else if(age >= 60 && serviceTime >= 25){
        printf("Pode se aposentar");
    }
    else
        printf("Nao pode se aposentar");

    return 0;
}
