// EXERCICIO 4

#include <stdio.h>

int main()
{
    int N, E = 1, cont, cont2, num, fatorial;

    printf("Digite um valor: ");
    scanf("%d", &N);

    for (cont = 1; cont <= N; ++cont)
    {

        num = 1.0 / cont;

        fatorial = 1;

        for (cont2 = num; cont2 > 0; --cont2)
        {

            fatorial *= num;
        }

        E += fatorial;
    }
    printf("Valor de E eh: %d", E);
    return 0;
}