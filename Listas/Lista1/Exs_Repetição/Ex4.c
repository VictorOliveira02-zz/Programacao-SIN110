// EXERCICIO 4 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int main()
{
    int num_linhas, a = 1, b = 1, c = 0, d = 0;

    printf("Digite numero de linhas do triangulo:");
    scanf("%d", &num_linhas);

    while (a <= num_linhas)
    {
        b = 1;
        while (b <= c + 1)
        {
            printf("%d ", d + 1);
            b++;
            d++;
        }

        c++;
        a++;
        printf("\n");
    }

    return 0;
}
