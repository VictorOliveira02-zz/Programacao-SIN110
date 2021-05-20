//EXERCICIO 8

#include <stdio.h>

int main()
{
    int matriz[50][50], N, M;
    int soma = 0, media, qnt_par = 0, qnt_impar = 0;
    int cont, lin, col;

    printf("Digite as dimensões (N x M): ");
    scanf("%d%d", &N, &M);

    for (lin = 0; lin < N; lin++)
    {
        for (col = 0; col < M; col++)
        {
            printf("Digite os valores (%d, %d): ", lin, col);
            scanf(" %d", matriz[lin][col]);
        }
    }

    for (lin = 0; lin < N; lin++)
    {
        for (col = 0; col < M; col++)
        {
            soma += matriz[lin][col];
        }
    }

    media = soma / N * M;

    for (lin = 0; lin < N; lin++)
    {
        for (col = 0; col < M; col++)
        {
            if (matriz[lin][col] % 2 == 0 && matriz[lin][col] > media)
            {
                qnt_par++;
            }
            else if (matriz[lin][col] % 2 != 0 && matriz[lin][col] > media)
            {
                qnt_impar++;
            }
        }
    }

    printf("\nElementos PARES acima da media: %d", qnt_par);
    printf("\nElementos IMPARES acima da media: %d", qnt_impar);
    printf("\nElementos TOTAIS acima da media: %d", qnt_par + qnt_impar);

    return 0;
}