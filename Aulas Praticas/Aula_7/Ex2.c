#include <stdio.h>

int main()
{
    int matriz[4][4];
    int cont, lin, col;

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("\nDigite os valores (%d,%d): ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("%d ", matriz[lin][col]);
        }
        printf("\n");
    }

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            if (matriz[lin][col] % 2 == 0)
            {
                printf("(%d,%d) ", lin, col);
            }
        }
        printf("\n");
    }

    return 0;
}