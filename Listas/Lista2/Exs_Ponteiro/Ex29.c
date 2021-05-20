#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, *p, x;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    (*p) += x;
    printf(" y = % d\n ", y);
    return 0;

    //Teremos como saida y = 5. 
}