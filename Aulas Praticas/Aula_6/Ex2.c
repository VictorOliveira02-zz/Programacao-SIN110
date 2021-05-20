#include <stdio.h>

int main()
{
    int vetor[10], cont, qnt = 0;

    for (cont = 0; cont < 10; cont++)
    {
        printf("Digite a posicao %d: ", cont + 1);
        scanf("%d", &vetor[cont]);
    }

    for (cont = 0; cont < 10; cont++)
    {
        if (vetor[cont] % 2 == 0)
        {
            qnt++;
        }
    }

    printf("%d ", qnt);

    return 0;
}