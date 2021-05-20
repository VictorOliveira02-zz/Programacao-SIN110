// EXERCICIO 1 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int main()
{
    int n, cont, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (cont = 1; cont < n; cont++)
    {
        soma += cont;
    }

    printf("A soma dos interios de 1 a %d = %d", n, soma);

    return 0;
}
