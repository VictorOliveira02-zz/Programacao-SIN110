// EXERCICIO 5

#include <stdio.h>

int isPrimo(num)
{
    int cont, result = 0;
    for (cont = 2; cont <= num / 2; cont++)
    {
        if (num % cont == 0)
        {
            result++;
            break;
        }
    }

    if (result == 0)
    {
        printf("\n%d eh primo", num);
    }
    else
    {
        printf("\n%d nao eh primo", num);
    }
}

int main()
{
    int num, M, contPrimo = 0, contDiv = 0;

    printf("\nDigite um valor: ");
    scanf("%d", &num);
    printf("%d", isPrimo(num));

    printf("\nDigite outro numero:");
    scanf("%d", &M);

    for (int cont = 1; contPrimo < M; cont++)
    {

        for (int j = 1 + 0; j <= cont; j++)
        {
            if (cont % j == 0)
            {
                contDiv++;
            }
        }

        if (contDiv == 2)
        {
            contPrimo++;
            printf("%d ", cont);
        }
        contDiv = 0;
    }

    return 0;
}