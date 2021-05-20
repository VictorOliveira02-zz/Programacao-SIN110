#include <stdio.h>
#include <stdlib.h>

int ImprimeMenor(int vetor[], int cont, int menor)
{

    if (cont < 0)
    {
        return 1;
    }

    if (vetor[cont] < menor)
    {
        menor = vetor[cont];
    }

    return ImprimeMenor(vetor, cont - 1, menor);
}

int main()
{
    int vetor[] = {8, 2, 3, 5, 7, 11, 13, 17};

    printf("Menor valor: %d", ImprimeMenor(vetor, 7, vetor[7]));

    return 0;
}