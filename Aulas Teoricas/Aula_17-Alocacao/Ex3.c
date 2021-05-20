//EXERCICIO 3

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int *v, tam_v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_v);

    v = (int *)malloc(tam_v * sizeof(int));

    srand(time(NULL));
    for (int cont = 0; cont < tam_v; cont++)
    {
        v[cont] = rand() % tam_v + 1;
    }

    printf("PAR: ");
    for (int cont = 0; cont < tam_v; cont++)
    {
        if (v[cont] % 2 == 0)
        {
            printf("%d, ", v[cont]);
        }
    }

    printf("\n");

    printf("IMPAR: ");
    for (int cont = 0; cont < tam_v; cont++)
    {
        if (v[cont] % 2 != 0)
        {
            printf("%d, ", v[cont]);
        }
    }

    free(v);
    return 0;
}