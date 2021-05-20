//EXERCICIO 5

#include <stdio.h>

int main()
{
    int matriz[5][5];
    int col, lin;

    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            if (lin == col)
            {
                matriz[lin][col] = 1;
            }
            else
            {
                matriz[lin][col] = 0;
            }
        }
    }

    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("\nPosicao (%d,%d):%d", lin, col, matriz[lin][col]);
        }
    }

    return 0;
}
