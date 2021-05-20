// EXERCICIO 3 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int main()
{
    float chico = 1.50, ze = 1.10, ano = 0;

    while (chico >= ze)
    {
        ano++;
        chico += 0.02;
        ze += 0.03;
    }
    printf("Serao necessarios %.0f anos para Ze ser maior que Chico.", ano);

    return 0;
}
