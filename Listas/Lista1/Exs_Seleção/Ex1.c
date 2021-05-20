// EXERCICIO 1 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{

    char time1 = 'S', time2 = 'P';
    int gols_time1 = 7, gols_time2 = 1;

    if (gols_time1 > gols_time2)
    {
        printf("TIME '%c' EH O VENCEDOR!", time1);
    }
    else if (gols_time2 > gols_time1)
    {
        printf("TIME '%c' EH O VENCEDOR!", time2);
    }
    else
    {
        printf("EMPATE!", time1);
    }

    return 0;
}
