#include <stdio.h>

int main()
{
    int matriz[3][3];
    int col, lin, maior = 0, menor = 9999999;

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("\nDigite linha e coluna (%d,%d):", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            if (matriz[lin][col] == 0)
            {
                maior = matriz[lin][col];
                menor = matriz[lin][col];
            }
            else if (matriz[lin][col] > maior)
            {
                maior = matriz[lin][col];
            }
            else if (matriz[lin][col] < menor)
            {
                menor = matriz[lin][col];
            }
        }
    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);

    return 0;
}