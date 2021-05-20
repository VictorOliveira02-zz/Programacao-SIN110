// EXERCICIO 4

#include <stdio.h>

int lerDados(int mat[][2], int n)
{
    for (int cont = 0; cont < n; cont++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat[cont][j] = cont + j;
        }
    }
    return mat;
}

void imprimeDados(int matriz[][2], int n)
{
    for (int cont = 0; cont < n; cont++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz[cont][j]);
        }
        printf("\n");
    }
}

void somaDados()
{

    int mat1[3][2] = {{11, 12}, {13, 14}, {15, 16}}, mat2[3][2] = {{1, 2}, {3, 4}, {5, 6}}, mat3[3][2];

    for (int cont = 0; cont < 3; cont++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat3[cont][j] = mat1[cont][j] + mat2[cont][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");
    }
}

int main()
{
    int mat[3][2];

    imprimeDados(lerDados(mat, 3), 3);
    printf("\n");
    somaDados();

    return 0;
}