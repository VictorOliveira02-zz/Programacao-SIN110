#include <stdio.h>

int main()
{

    int matriz[5][5];
    int cont, lin, col;

    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("Digite os valores (%d,%d): ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            if (lin == col)
            {
                printf(" %d ", matriz[lin][col]);
            }
        }
    }

    return 0;
}