#include <stdio.h>
#include <stdlib.h>

int Multiplica(int a, int b)
{
    if (b == 0)
        return b;
    else if (b == 1)
        return a;
    else
        return a + Multiplica(a, b - 1);
}

int main()
{
    int a, b, resultado;

    printf("Digite os valores de a e b: ");
    scanf("%d%d", &a, &b);

    resultado = Multiplica(a, b);

    printf("resultado = %d", resultado);

    return 0;
}