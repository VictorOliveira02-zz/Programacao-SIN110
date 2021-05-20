#include <stdio.h>

int main()
{
    int cont, soma, num = 4;

    soma = 0;
    for (cont = 0; cont < num; cont++)
    {
        soma += ((cont * 2) + 1);
    }

    printf("\n%d", soma);
    return 0;
}
