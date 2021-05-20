//EXERCICIO 7

#include <stdio.h>

typedef struct sRacional
{
    int n, d; //numerador e denominador
} Racional;

float soma(x, y)
{
    return x + y;
}

float sub(x, y)
{
    return x - y;
}

float div(x, y)
{
    return x / y;
}

float multi(x, y)
{
    return x * y;
}

int main()
{
    Racional num;

    printf("Digite dois valores: ");
    scanf("%d%d", &num.n, &num.d);

    printf("\nSoma: %.2f", soma(num.n, num.d));
    printf("\nSubtracao: %.2f", sub(num.n, num.d));
    printf("\nDivisao: %.2f", div(num.n, num.d));
    printf("\nMultiplicacao: %.2f", multi(num.n, num.d));

    return 0;
}