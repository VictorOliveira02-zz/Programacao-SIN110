#include <stdio.h>

int main()
{

    int num1 = 4, num2 = 6;

    if (num1 % 2 == 0)
    {
        printf("\nO numero %d eh par e", num1);
    }
    else
    {
        printf("\nO numero %d eh impar e", num1);
    }


    if (num1 > num2)
    {
        printf(" eh o maior");
    }
    else
    {
        printf(" eh o menor");
    }


    if (num2 % 2 == 0)
    {
        printf("\nO numero %d eh par e", num2);
    }
    else
    {
        printf("\nO numero %d eh impar e", num2);
    }
    if (num2 > num1)
    {
        printf(" eh o maior");
    }
    else
    {
        printf(" eh o menor");
    }

    return 0;
}