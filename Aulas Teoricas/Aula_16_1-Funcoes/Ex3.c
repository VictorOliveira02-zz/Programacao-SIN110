//EXERCICIO 3

#include <stdio.h>

int somatorio(n)
{
    int soma = 0, cont;
    for (cont = 1; cont < n; cont++)
    {
        soma += n;
    }

    return soma;
}

int main()
{
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("Somatório de %d ate %d = %d", 1, n, somatorio(n));

    return 0;
}