#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, tam_v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_v);

    v = (int *)malloc(tam_v * sizeof(int));

    for (int cont = 0; cont < tam_v; cont++)
    {
        printf("Digite o valor da posicao %d: ", cont + 1);
        scanf("%d", &v[cont]);
    }

    for (int cont = 0; cont < tam_v; cont++)
    {
        printf("\nValor da posicao %d -> %d ", cont + 1, v[cont]);
    }

    free(v);
    return 0;
}