#include <stdio.h>

int main()
{

    int num, parte_int, parte_float;
    int soma_partes;

    for (num = 1000; num <= 9999; num++)
    {
        parte_int = num / 100;
        parte_float = num % 100;

        soma_partes = (parte_int + parte_float) * (parte_int + parte_float);

        if (num == soma_partes)
        {
            printf("\n%d possui a propiedade.", num);
        }
    }
    return 0;
}