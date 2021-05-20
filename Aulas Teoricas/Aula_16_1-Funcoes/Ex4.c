//EXERCICIO 4

#include <stdio.h>
#include <math.h>

int somaAlgarismo(num)
{
    int soma = 0, resto;
    while (num > 0)
    {
        resto = num % 10;
        soma += resto;
        num = num / 10;
    }

    return soma;
}

int main()
{
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("\nSoma dos algarismo de %d = %d", num, somaAlgarismo(num));

    return 0;
}