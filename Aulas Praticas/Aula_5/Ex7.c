#include <stdio.h>

int main()
{

    int N, coluna, linha;
    char letra;

    printf("Digite uma LETRA e um NUMERO: ");
    scanf("%c%d", &letra, &N);

    for (coluna = 1; coluna <= N; coluna++)
    {
        printf(" %c", letra);
    }
    printf("\n");

    for (linha = 2; linha < N; linha++) //LATERAIS
    {
        printf(" %c", letra); //CRIANDO AS VAZIAS
        for (coluna = 2; coluna < N; coluna++)
        {
            printf("  ");
        }
        printf(" %c\n", letra); // ULTIMA LATERAL
    }
    for (coluna = 1; coluna <= N; coluna++) // PREENCHENDO ULTIMA LINHA
    {
        printf(" %c", letra);
    }

    return 0;
}