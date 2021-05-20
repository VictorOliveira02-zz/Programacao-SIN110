#include <stdio.h>

int main()
{
    int vetor[10], cont, qnt2 = 0, qnt3 = 0, qnt5 = 0;

    for (cont = 0; cont < 10; cont++)
    {
        do
        {
            printf("Digite a posicao %d: ", cont + 1);
            scanf(" %d", &vetor[cont]);
        } while ((vetor[cont] < 0) || (vetor[cont] > 9));

        switch (vetor[1])
        {
        case 2:
            qnt2++;
            break;
        case 3:
            qnt3++;
            break;
        case 5:
            qnt5++;
            break;
        }
    }

    printf("%d %d %d", qnt2, qnt3, qnt5);

    return 0;
}