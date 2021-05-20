#include <stdio.h>

int main()
{
    char vetor[10];
    int cont;

    for (cont = 0; cont < 10; cont++)
    {
        printf("Digite a letra da posicao %d: ", cont + 1);
        scanf(" %c", &vetor[cont]);
    }

    for (cont = 0; cont < 10; cont++)
    {
        if (vetor[cont] == 'a' || vetor[cont] == 'e' || vetor[cont] == 'i' || vetor[cont] == 'o' || vetor[cont] == 'u')
        {
            printf("%c ", vetor[cont]);
        }
    }
    return 0;
}