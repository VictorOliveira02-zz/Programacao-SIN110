//EXERCICIO 6

#include <stdio.h>
#include <math.h>

int MMC(num1, num2)
{

    int resto, n1, n2;

    n1 = num1;
    n2 = num2;

    do
    {
        resto = n1 % n2;

        n1 = n2;
        n2 = resto;

    } while (resto != 0);

    return (num1 * num2) / n1;
}

int MDC(num1, num2)
{
    int resto;

    do
    {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main()
{
    int num1, num2;

    printf("Digite dois valores: ");
    scanf("%d%d", &num1, &num2);
    if (num1 < 0 || num2 < 0)
    {
        printf("Digite dois valores POSITIVOS: ");
        scanf("%d%d", &num1, &num2);
    }

    printf("MMC: %d", MMC(num1, num2));
    printf("\nMDC: %d", MDC(num1, num2));

    return 0;
}