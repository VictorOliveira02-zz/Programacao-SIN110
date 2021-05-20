#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[40], vetB[40], vetC[40];
    int tam = 5;

    for (int cont = 0; cont < tam; cont++)
    {
        printf("Digite o %d valor do VETOR A: ", cont + 1);
        scanf("%d", &vetA[cont]);
    }

    printf("\n");

    for (int cont = 0; cont < tam; cont++)
    {
        printf("Digite o %d valor do VETOR B: ", cont + 1);
        scanf("%d", &vetB[cont]);
    }

    printf("\n");

    for (int cont = 0; cont < tam; cont++)
    {
        vetC[cont] = vetA[cont] - vetB[cont];
        printf("%d - %d = %d\n", vetA[cont], vetB[cont], vetC[cont]);
    }

    return 0;
}