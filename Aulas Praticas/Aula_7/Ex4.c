#include <stdio.h>

int main()
{
    float matriz[3][3], soma = 0;
    int cont, lin, col;

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("\nDigite os valores (%d,%d): ", lin, col);
            scanf("%f", &matriz[lin][col]);
        }
    }

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            soma += matriz[lin][col];
        }
    }

    printf("%.2f", soma/9);

    return 0;
}