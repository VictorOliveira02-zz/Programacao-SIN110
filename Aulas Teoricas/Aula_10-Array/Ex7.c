//EXERCICIO 7

#include <stdio.h>

int main()
{
    float matriz[3][6];
    float soma_col_impar = 0, soma_col = 0, soma_col_par = 0, qnt_par = 0;
    int cont, lin, col;

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 6; col++)
        {
            printf("\nDigite os valores (%d,%d): ", lin, col);
            scanf("%f", &matriz[lin][col]);
        }
    }

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 6; col++)
        {
            if (col % 2 != 0)
            {
                soma_col_impar += matriz[lin][col];
            }
        }
    }

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 6; col++)
        {
            if (col % 2 == 0)
            {
                soma_col_par += matriz[lin][col];
                qnt_par++;
            }
        }
    }

    printf("\nSoma elementos Colunas impares: %.2f", soma_col_impar);
    printf("\nMedia elementos Colunas Pares: %.2f\n", soma_col_par / qnt_par);

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 2; col++)
        {
            if (col == 0)
            {
                matriz[lin][5] = 0;
            }
            matriz[lin][5] += matriz[lin][col];
        }
    }

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 6; col++)
        {
            printf("%.2f ", matriz[lin][col]);
        }
        printf("\n");
    }

    return 0;
}