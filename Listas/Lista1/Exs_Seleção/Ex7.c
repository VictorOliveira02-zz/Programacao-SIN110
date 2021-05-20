// EXERCICIO 7 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{
    float valor_produto = 10, valor_venda;

    if (valor_produto < 20)
    {
        valor_venda = valor_produto * 0.45;
        printf("Valor total da compra:R$ %.2f", valor_venda + valor_produto);
    }
    else
    {
        valor_venda = valor_produto * 0.30;
        printf("Valor total da compra:R$ %.2f", valor_venda + valor_produto);
    }

    return 0;
}