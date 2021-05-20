// EXERCICIO 4 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Digite dois numeros: ");
    scanf("%f%f", &num1, &num2);

    if (num1 > num2)
    {
        printf("%.2f -> %.2f", num2, num1);
    }
    else
    {
        printf("%.2f -> %.2f", num1, num2);
    }

    return 0;
}
