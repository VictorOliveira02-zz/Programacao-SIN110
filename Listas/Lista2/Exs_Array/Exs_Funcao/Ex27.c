#include <stdio.h>
#include <stdlib.h>

typedef struct sConta
{
    char nome[20];
    float saldo;
    char operacao;
} Conta;

float Saldo(Conta *conta)
{
    float Saldo = 0;
    for (int cont = 0; cont < strlen(conta); cont++)
    {
        Saldo += conta[cont].saldo;
    }

    return Saldo;
}

int main()
{
    Conta conta[100];

    for (int cont = 0; cont < strlen(conta); cont++)
    {
        printf("\nQual operacao deseja fazer [D/C]? ou S para sair: ");
        fflush(stdin);
        scanf("%c", &conta[cont].operacao);
        if (conta[cont].operacao == 'S')
        {
            break;
        }

        printf("Digite o valor : ");
        scanf("%f", &conta[cont].saldo);
    }

    printf("\nSaldo final: R$ %.2f", Saldo(conta));

    return 0;
}