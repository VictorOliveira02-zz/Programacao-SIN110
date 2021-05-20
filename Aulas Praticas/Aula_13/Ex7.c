#include <stdio.h>
#include <stdlib.h>

int somatorio(int num, int cont)
{
    int v = (num == cont) ? cont : num + somatorio(num + 1, cont);
    return v;
}

int main()
{
    int num, result;

    printf("Digite um valor: ");
    scanf("%d", &num);

    result = somatorio(num, 10);

    printf("Somatorio de [%d, 10] = %d", num, result);

    return 0;
}