#include <stdio.h>

int main()
{
    int var = 10;
    int *pvar;

    pvar = &var;

    printf("%d", *pvar);

    return 0;
}