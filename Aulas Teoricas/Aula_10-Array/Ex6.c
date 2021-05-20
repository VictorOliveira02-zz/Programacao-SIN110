//EXERCICIO 6

#include <stdio.h>

int main()
{
    int matriz[4][4];
    int col, lin, maior = 0, lin_maior, col_maior;

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("\nDigite linha e coluna (%d,%d):", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            if (matriz[lin][col] == 0)
            {
                maior = matriz[lin][col];
                lin_maior = lin;
                col_maior = col;
            }
            else if (matriz[lin][col] > maior)
            {
                maior = matriz[lin][col];
                lin_maior = lin;
                col_maior = col;
            }
        }
    }

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("\nPosicao (%d,%d):%d", lin, col, matriz[lin][col]);
        }
    }

    printf("\nPosicao do maior(%d,%d): %d", lin_maior, col_maior, maior);

    return 0;
}
