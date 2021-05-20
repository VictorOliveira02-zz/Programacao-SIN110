#include <stdio.h>

int main()
{
    int vetor[50], i, calc;

    for (i = 0; i < 50; i++)
    {
        calc = (i + 5 * i) % (i + 1);
        printf("%d ", calc);
    }

    return 0;
}