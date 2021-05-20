// EXERCICIO 7

#include <stdio.h>

int main()
{

    int num = 10;
    int triplo, dobro, soma;

    triplo = (num * 3) + 1;
    dobro = (num * 2) - 1;
    soma = triplo + dobro;

    printf("A soma(%d) do sucessor de seu triplo(%d) com o antecessor de seu dobro(%d) = %d", num, triplo, dobro, soma);

    return 0;
}