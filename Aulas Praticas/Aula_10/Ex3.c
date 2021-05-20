#include <stdio.h>

int main()
{
    int num = 10;
    int *p1, *p2;

    p1 = &num;
    p2 = p1;

    printf("P1: %d\nP2: %d", p1, p2);
    
    return 0;
}