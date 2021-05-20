#include <stdio.h>

int **aloca_matriz(int **mat, int lin, int cols)
{
    mat = malloc(lin * sizeof(int *));

    for (int cont = 0; cont < lin; cont++)
    {
        mat[cont] = malloc(cols * sizeof(int));
    }

    return mat;
}

void libera_matriz(int **mat, int lines)
{
    for (int cont = 0; cont < lines; cont++)
    {
        free(mat[cont]);
    }
    free(mat);
}

int retorna(int **mat, int lines, int cols, int num)
{
    for (int cont = 0; cont < lines; cont++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[j][cont] == num)
            {
                return printf("\n%d ", 1);
            }
            else
            {
                return printf("\n%d ", 0);
            }
        }
    }
}
int main()
{
    int **mat = NULL, lines, cols, num;

    printf("Digite qntd de linhas: ");
    scanf("%d", &lines);

    printf("Digite qntd de colunas: ");
    scanf("%d", &cols);

    mat = aloca_matriz(mat, lines, cols);

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n\n");
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nQual numero quer verificar: ");
    scanf("%d", &num);

    retorna(mat, lines, cols, num);

    libera_matriz(mat, lines);
    return 0;
}
