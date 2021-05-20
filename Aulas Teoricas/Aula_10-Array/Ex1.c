//EXERCICIO 1

#include <stdio.h>

int main()
{
    int vetor[10], maior = 0;
    int cont, pos;

    for (cont = 0; cont < 10; cont++)
    {
        printf("Digite o numero na pos %d: ", cont);
        scanf("%d", &vetor[cont]);
    }

    for (cont = 0; cont < 10; cont++)
    {

        if (cont == 0)
        {
            maior = vetor[cont];
            pos = cont;
        }
        else if (vetor[cont] > maior)
        {
            maior = vetor[cont];
            pos = cont;
        }
    }

    printf("Vetor:");
    for (cont = 0; cont < 10; cont++)
    {
        printf(" %d -> ", vetor[cont]);
    }
    printf("FIM!");

    printf("\nMaior numero: %d - Na Pos: %d", maior, pos);
    return 0;
}