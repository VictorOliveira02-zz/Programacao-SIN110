//EXERCICIO 2

#include <stdio.h>

int main()
{
    int vetorA[10], vetorB[10], vetorC[10];
    int cont;

    for (cont = 0; cont < 10; cont++)
    {
        printf("Vetor A - POS: %d: ", cont);
        scanf("%d", &vetorA[cont]);
    }

    printf("\n");

    for (cont = 0; cont < 10; cont++)
    {
        printf("Vetor B - POS: %d: ", cont);
        scanf(" %d", &vetorB[cont]);
    }

    printf("\nVetor C:");

    for (cont = 0; cont < 10; cont++)
    {
        vetorC[cont] = vetorA[cont] - vetorB[cont];
        printf(" %d -> ", vetorC[cont]);
    }
    printf("FIM!");

    return 0;
}