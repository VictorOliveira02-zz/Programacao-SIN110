// EXERCICIO 7 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int main()
{
    float S = 0;
    int cont;

    for (cont = 1; cont <= 10; cont++)
    {
        if (cont % 2 == 0)
        {
            S -= cont / cont * cont;
            printf("- %d/%d\n", cont, cont * cont);
        }
        else
        {
            S += cont / cont * cont;
            printf("+ %d/%d\n", cont, cont * cont);
        }
    }
    printf("S = %.2f ", S);

    return 0;
}