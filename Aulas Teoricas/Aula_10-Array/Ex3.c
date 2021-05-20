//EXERCICIO 3

#include <stdio.h>

int main()
{
    int vetor[20], cont, qnt = 0;

    for (cont = 0; cont < 20; cont++)
    {
        printf("Vetor - POS: %d: ", cont);
        scanf("%d", &vetor[cont]);
    }

    for (cont = 0; cont < 20; cont++)
    {
        for (int j = cont++; j < 20; j++)
        {
            if (cont != j)
            {

                if (vetor[cont] == vetor[j])
                {
                    printf(" %d - ", vetor[cont]);
                    qnt++;
                }
            }
        }
    }

    printf("\nQuantidade de valores repetidos: %d\n", qnt);
    return 0;
}