#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, tam_v, soma = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_v);

    v = (int *)malloc(tam_v * sizeof(int));

    for (int cont = 0; cont < tam_v; cont++)
    {
        printf("Digite o valor %d: ", cont + 1);
        scanf("%d", &v[cont]);

        soma += v[cont];
    }

    printf("\nMedia = %d ", soma / tam_v);

    free(v);
    return 0;
}