// EXERCICIO 8

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i < 11; i++)
    {
        printf("\n");
        for (j = 1; j < 11; j++)
        {
            printf("%d X %d = %d\n", j, i, j * i);
        }
    }

    return 0;
}