#include <stdio.h>

int main()
{
    int cont, n = 10;

    for (cont = 1; cont <= n; cont++)
    {
        if (n % cont == 0)
        {
            printf("%d\n", cont);
        }
    }
    return 0;
}