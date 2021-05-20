#include <stdio.h>

int main()
{
    float matriz[7][4], soma = 0;
    int cont, lin, col;

    for (lin = 0; lin < 7; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("\nDigite os valores (%d,%d): ", lin, col);
            scanf("%f", &matriz[lin][col]);
        }
    }

    for (lin = 0; lin < 7; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            soma += matriz[lin][col];
        }
    }

    printf("%.2f", soma);

    return 0;
}