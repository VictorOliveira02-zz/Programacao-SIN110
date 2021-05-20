//EXERCICIO 4

#include <stdio.h>

int main()
{
    int N = 0, cont;
    float vetorA[N], vetorB[N];
    float vetor1[N], vetor2[N], vetor3[N], vetor4[N];

    printf("Com quantos elementos deseja fazer as operacoes: ");
    scanf("%d", &N);

    for (cont = 0; cont < N; cont++)
    {
        printf("Vetor A - POS: %d: ", cont);
        scanf(" %f", &vetorA[cont]);
    }

    printf("\n");

    for (cont = 0; cont < N; cont++)
    {
        printf("Vetor B - POS: %d: ", cont);
        scanf("  %f", &vetorB[cont]);
    }

    printf("\nSOMA:");
    for (cont = 0; cont < N; cont++)
    {
        vetor1[cont] = vetorA[cont] + vetorB[cont];
        printf(" %.2f -> ", vetor1[cont]);
    }

    printf("\nSUBTRACAO:");
    for (cont = 0; cont < N; cont++)
    {
        vetor2[cont] = vetorA[cont] - vetorB[cont];
        printf(" %.2f -> ", vetor2[cont]);
    }

    printf("\nDVISAO:");
    for (cont = 0; cont < N; cont++)
    {
        vetor3[cont] = vetorA[cont] / vetorB[cont];
        printf(" %.2f -> ", vetor3[cont]);
    }

    printf("\nMULTIPLICACAO:");
    for (cont = 0; cont < N; cont++)
    {
        vetor4[cont] = vetorA[cont] * vetorB[cont];
        printf(" %.2f -> ", vetor4[cont]);
    }

    return 0;
}
