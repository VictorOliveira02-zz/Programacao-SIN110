// EXERCICIO 3 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{
    float salario_bruto, valor_prestacao, valor_emprestimo;

    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);

    printf("Valor da prestacao: ");
    scanf(" %f", &valor_prestacao);

    valor_emprestimo = 0.3 * salario_bruto;

    if (valor_emprestimo >= valor_prestacao)
    {
        printf("O emprestimo pode ser concedido.");
    }
    else
    {
        printf("O emprestimo nao pode ser concedido.");
    }

    return 0;
}
