#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, sm, mf;
        printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
        printf("Digite a segunda nota: \n");
    scanf("%f", &n2);

    sm= n1 + n2;
    mf = sm / 2;

    if (n1 >= 0, n1 <= 10, n2 >= 0, n2 <= 10 )
    {
        printf("A media final das notas e: %.2f \n", mf);
    }
    else
    {
        printf("As notas nao sao validas");
    }

    return 0;
}
