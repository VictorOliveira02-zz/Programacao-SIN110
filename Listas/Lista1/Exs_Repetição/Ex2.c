// EXERCICIO 2 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int main()
{
    int n, cont_for, cont_while = 0, cont_dowhile = 0;

    for (cont_for = 1; cont_for <= 300; cont_for++)
    {
        printf("%d - ", cont_for);
    }

    printf("\n====================================================================================\n");

    while (cont_while < 300)
    {
        cont_while++;
        printf("%d - ", cont_while);
    }

    printf("\n====================================================================================\n");

    do
    {
        cont_dowhile++;
        printf("%d - ", cont_dowhile);
    } while (cont_dowhile < 300);

    return 0;
}
