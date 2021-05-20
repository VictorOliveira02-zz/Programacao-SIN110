#include <stdio.h>

int main()
{
    int n, cont, soma = 0;

    printf("Digite um valor: ");
    scanf("%d", &n);

    for (cont = 1; cont <= n; cont++)
    {
        soma += cont;
        printf("\n%d", soma);
    }

    return 0;
}