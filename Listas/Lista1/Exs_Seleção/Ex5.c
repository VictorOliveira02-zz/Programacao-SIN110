// EXERCICIO 5 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{
    float num1, num2, num3;
    float maior = 0;

    printf("Digite tres numeros: ");
    scanf("%f%f", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("MAIOR NUMERO DIGITADO: %.2f", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("MAIOR NUMERO DIGITADO: %.2f", num2);
    }
    else if (num3 > num2 && num3 > num1)
    {
        printf("MAIOR NUMERO DIGITADO: %.2f", num3);
    }
    else
    {
        printf("VALORES IGUAIS");
    }

    return 0;
}
