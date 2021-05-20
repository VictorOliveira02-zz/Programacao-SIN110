#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Delta(float a, float b, float c)
{
    float delta;

    delta = pow(b, 2) - 4 * a * c;
    return delta;
}

int main()
{
    float a, b, c;

    printf("Digite os valores de a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    printf("Delta = %.2f", Delta(a, b, c));

    return 0;
}