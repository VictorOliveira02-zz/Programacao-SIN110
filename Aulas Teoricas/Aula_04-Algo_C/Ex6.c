// EXERCICIO 6

#include <stdio.h>

int main()
{

    float valor_real = 2500, cotacao = 5.38, convertido = valor_real / cotacao;

    printf("R$%0.2f em dolar($%0.2f) = %0.2f", valor_real, cotacao, convertido);

    return 0;
}