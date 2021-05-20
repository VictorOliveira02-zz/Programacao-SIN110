// Exercicio 5

#include <stdio.h>

int main()
{

    int num = 9801, parte_int, parte_float;
    int soma_partes;

    parte_int = num / 100;
    parte_float = num % 100;

    soma_partes = (parte_int + parte_float) * (parte_int + parte_float);

    if (num == soma_partes)
    {
        printf("%d possui a propiedade.", num);
    }
    else
    {
        printf("%d nao possui a propiedade.", num);
    }

    return 0;
}