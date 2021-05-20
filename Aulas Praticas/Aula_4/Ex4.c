#include <stdio.h>

int main()
{
    char codigo = 'A';

    if (codigo == 'A')
    {
        printf("Ventilador, Televisao");
    }
    else if (codigo == 'B')
    {
        printf("Aparelho de Som, Batedeira");
    }
    else if (codigo == 'C')
    {
        printf("Fogao eletrico, Liquidificador");
    }
    else if (codigo == 'D')
    {
        printf("Freezer, Geladeira, Maquina de Lavar");
    }
    else if (codigo == 'E')
    {
        printf("Ar-condicionado, Micro-ondas");
    }

    return 0;
}