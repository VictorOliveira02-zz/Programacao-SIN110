#include <stdio.h>

int main()
{
    int vetor[10], cont;

    for (cont = 0; cont < 10; cont++)
    {
        printf("Digite a posicao %d: ", cont + 1);
        scanf("%d", &vetor[cont]);
    }

    for (cont = 0; cont < 10; cont++)
    {
        printf("%d ", vetor[cont]);
    }
    return 0;
}