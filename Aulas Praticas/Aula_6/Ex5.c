#include <stdio.h>

int main()
{
    float vetor[15];
    int opcao, cont;

    for (cont = 0; cont < 15; cont++)
    {
        printf("Digite a posicao %d: ", cont + 1);
        scanf("%f", &vetor[cont]);
    }

    printf("\nDigite sua opcao [1 || 2]:");
    scanf(" %d", &opcao);

    if (opcao == 1)
    {
        for (cont = 0; cont < 15; cont++)
        {
            printf("%.1f ", vetor[cont]);
        }
    }
    else if (opcao == 2)
    {
        for (cont = 15; 0 < cont; cont--)
        {
            printf("%.2f ", vetor[cont]);
        }
    }
    else
    {
        printf("Opcao Invalida!");
    }

    return 0;
}