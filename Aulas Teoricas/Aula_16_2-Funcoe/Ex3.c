// EXERCICIO 3

#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C)
{
    float delta, X1, X2;

    delta = pow(-B, 2) - 4 * A * C;
    if (delta < 0)
    {
        return printf("Nao existe real");
    }

    X1 = (-B + sqrt(delta)) / 2 * A;
    X2 = (-B - sqrt(delta)) / 2 * A;

    return printf("X1: %.2f\nX2: %.2f", X1, X2);
}

int main()
{
    raizes(5, 10, 1);
    return 0;
}