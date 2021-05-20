#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];
    int conta = 0;

    for (int lin = 0; lin < 4; lin++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("Digite os valores [%d][%d]: ", lin, col);
            scanf("%d", &matriz[lin][col]);

            if (matriz[lin][col] > 10)
            {
                conta++;
            }
        }
    }

    printf("\nQntd valores acima de 10: %d", conta+1);

    return 0;
}