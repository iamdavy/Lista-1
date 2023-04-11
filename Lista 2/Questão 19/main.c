#include <stdio.h>
#include <stdlib.h>

int main()
{
    int basemenor, basemaior, altura, area;

    printf("Coloque as medidas nas seguintes sequencias: base menor, base maior e altura\n");
    scanf("%d%d%d", &basemenor, &basemaior, &altura);

    area = ((basemaior + basemenor) * altura) / 2;

    printf("area: %d", area);
    return 0;
}
