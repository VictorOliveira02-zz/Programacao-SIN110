#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int somaL = 0, somaC = 0;

    for (int lin = 0; lin < 3; lin++)
    {
        somaL = 0;
        somaC = 0;
        for (int col = 0; col < 3; col++)
        {
            printf("Digite os valores [%d][%d]: ", lin, col);
            scanf("%d", &matriz[lin][col]);

            somaL += matriz[lin][col];
            somaC += matriz[col][lin];
        }
    }

    printf("\nSoma linhas:%d\nSoma das colunas: %d", somaL, somaC);

    return 0;
}