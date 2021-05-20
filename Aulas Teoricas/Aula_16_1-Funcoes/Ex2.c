//EXERCICIO 2

#include <stdio.h>

int fatorial(num)
{
    int fat;
    for (fat = 1; num > 1; num = num - 1)
    {
        fat = fat * num;
    }

    return fat;
}

int main()
{
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("Fatorial de %d! = %d", num, fatorial(num));

    return 0;
}