#include <stdio.h>
#include <stdlib.h>

int fib(int num)
{
    int n = (num == 0 || num == 1) ? num : fib(num - 2) + fib(num - 1);
    return n;
}

int main()
{
    int num;

    printf("Digite o valor de num: ");
    scanf("%d", &num);

    printf("\nFibonacci de %d = %d ", num, fib(num));

    return 0;
}