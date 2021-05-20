// Exercicio 1

#include <stdio.h>

int main()
{
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
    {
        printf("%d eh um ano bissexto", ano);
    }
    else
    {
        printf("%d nao eh um ano bissexto", ano);
    }

    return 0;
}