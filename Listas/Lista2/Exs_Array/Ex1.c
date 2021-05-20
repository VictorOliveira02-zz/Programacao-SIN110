#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5], tam = 30;

    for (int cont = 0; cont < tam; cont++)
    {
        printf("Digite o %d valor: ", cont + 1);
        scanf("%d", &vet[cont]);
    }

    for (int cont = tam; cont >= 0; cont--)
    {
        printf("%d - %d\n", cont, vet[cont]);
    }

    return 0;
}