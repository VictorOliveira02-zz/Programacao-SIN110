// EXERCICIO 2 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{

    int n_trabalhador = 10, qnt_caixa = 21;
    float salario;

    if (qnt_caixa <= 5)
    {
        salario = qnt_caixa * 2;
        printf("Caixas Carregadas: %d\nSalario:R$ %.2f", qnt_caixa, salario);
    }
    else if (qnt_caixa >= 6 && qnt_caixa <= 10)
    {
        salario = qnt_caixa * 2.50;
        printf("Caixas Carregadas: %d\nSalario:R$ %.2f", qnt_caixa, salario);
    }
    else if (qnt_caixa >= 11 && qnt_caixa <= 20)
    {
        salario = qnt_caixa * 3.50;
        printf("Caixas Carregadas: %d\nSalario:R$ %.2f", qnt_caixa, salario);
    }
    else
    {
        salario = qnt_caixa * 5;
        printf("Caixas Carregadas: %d\nSalario:R$ %.2f", qnt_caixa, salario);
    }
    return 0;
}
