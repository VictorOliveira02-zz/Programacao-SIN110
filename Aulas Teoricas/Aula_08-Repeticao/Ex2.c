// EXERCICIO 2

#include <stdio.h>

int main()
{
    int num, i, divisao_exata = 0;
    int sair = 1;

    while (sair != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        for (i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                divisao_exata++;
                break;
            }
        }

        if (divisao_exata == 0)
        {
            printf("%d eh primo.", num);
        }
        else
        {
            printf("%d nao eh primo.", num);
        }

        printf("\nQualquer valor para continuar / 0 para SAIR: ");
        scanf("%d", &sair);
    }
    return 0;
}