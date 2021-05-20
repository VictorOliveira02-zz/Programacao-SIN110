// EXERCICIO 1

#include <stdio.h>

int negativos(float *vet, int N)
{
    int conta;
    for (int cont = 0; cont < N; cont++)
    {
        if (vet[cont] < 0)
        {
            conta++;
        }
    }
    return printf("%d", conta);
}

int main()
{
    float numeros[5] = {0, -1, -2, -2, -5};

    negativos(numeros, 5);

    return 0;
}