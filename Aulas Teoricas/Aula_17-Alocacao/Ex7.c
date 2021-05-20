//EXERCICIO 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **M, l, c;

    printf("Digite o numero de linhas: ");
    scanf("%d", &l);

    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    M = (int **)malloc(sizeof(int *) * l);
    if (M == NULL)
    {
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    for (int i = 0; i < l; i++)
    {
        M[i] = (int *)malloc(sizeof(int) * c);
        if (M[i] == NULL)
        {
            printf("Memoria insuficiente.\n");
            exit(1);
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            M[i][j] = i, j;
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l; i++)
    {
        free(M[i]);
    }
    free(M);
    return 0;
}