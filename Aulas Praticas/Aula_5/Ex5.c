#include <stdio.h>

int main()
{
    int fatorial, num = 10;

    for (fatorial = 1; num > 1; num--)
    {
        fatorial = fatorial * num;
    }

    printf("%d", fatorial);
    return 0;
}