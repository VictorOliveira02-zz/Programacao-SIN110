#include <stdio.h>
#include <stdlib.h>

int ImprimeNum(int num)
{
    printf("%d -> ", num);
    int n = (num == 1) ? 1 : ImprimeNum(num - 1);
    return n;
}

int main()
{
    int num;

    ImprimeNum(10);
    printf("FIM!");

    return 0;
}