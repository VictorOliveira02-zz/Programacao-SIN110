// EXERCICIO 2

#include <stdio.h>
#include <stdlib.h>
const int tam = 5;

int maior(int *vet[], int len)
{
    int num_maior = 0;

    for (int cont = 0; cont < len; cont++)
    {
        if (vet[cont] > num_maior)
        {
            num_maior = vet[cont];
        }
    }
    return printf("Maior: %d\n", num_maior);
}

int menor(int *vet[], int len)
{
    int num_menor = 9999;
    for (int cont = 0; cont < len; cont++)
    {
        if (vet[cont] < num_menor)
        {
            num_menor = vet[cont];
        }
    }
    return printf("Menor: %d\n", num_menor);
}

int media(int vet[], int len)
{
    int soma = 0, conta = 0;
    for (int cont = 0; cont < len; cont++)
    {
        soma += vet[cont];
        conta++;
    }
    return printf("Media: %d\n", soma / conta);
}

int main()
{
    srand(time(NULL));
    int vetor1[5];
    for (int cont = 0; cont < tam; cont++)
    {
        vetor1[cont] = rand() % 10 + 1;
    }

    int vetor2[5];
    for (int cont1 = 0; cont1 < tam; cont1++)
    {
        vetor2[cont1] = rand() % 10 + 1;
    }

    maior(vetor1, tam);
    menor(vetor1, tam);
    media(vetor1, tam);

    printf("\n");

    maior(vetor2, tam);
    menor(vetor2, tam);
    media(vetor2, tam);

    return 0;
}