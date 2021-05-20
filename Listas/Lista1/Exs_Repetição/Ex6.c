// EXERCICIO 6 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int main()
{
    float cont, num = 3, S, soma = 0;

    for (cont = 1; cont <= num; cont++)
    {
        S = 1 / (cont * 2);
        soma += S;
    }
    printf("S = %.2f ", soma + 1);

    return 0;
}