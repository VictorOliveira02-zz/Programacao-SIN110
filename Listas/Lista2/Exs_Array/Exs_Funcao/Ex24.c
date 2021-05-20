#include <stdio.h>
#include <stdlib.h>

void Gera(int num)
{
    for (int cont = 0; cont < num; cont++)
    {
        printf("x");

        for (int j = 0; j < num; j++)
        {
            printf("+");
        }
        printf("\n");
    }
}

int main()
{
    int num;

    printf("Digite o valor:");
    scanf("%d", &num);

    Gera(num);

    return 0;
}