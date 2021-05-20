#include <stdio.h>

int incrementa(int *num)
{
    return *num += 2;
}

int main()
{
    int N;
    printf("Digite um valor: ");
    scanf("%d", &N);

    for (int cont = 0; cont < N; cont++)
    {

        if (cont % 2 != 0)
        {
            printf("%d ", cont);
        }
    }

    return 0;
}