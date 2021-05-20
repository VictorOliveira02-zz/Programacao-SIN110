#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *v1, *v2, *v3;
    int n;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    v1 = (float *)malloc(n * sizeof(int));
    v2 = (float *)malloc(n * sizeof(int));
    v3 = (float *)malloc(n * sizeof(int));

    for (int cont = 0; cont < n; cont++)
    {
        printf("Digite o valor %d de v1: ", cont + 1);
        scanf("%f", &v1[cont]);
        v3[cont] = v1[cont];
    }
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        printf("Digite o valor %d de v2: ", j + 1);
        scanf("%f", &v2[j]);
        v3[j + n] = v2[j];
    }

    for (int cont = 0; cont < n*2; cont++)
    {
        printf("v3 = %.2f\n", v3[cont]);
    }

    free(v1);
    free(v2);
    free(v3);

    return 0;
}