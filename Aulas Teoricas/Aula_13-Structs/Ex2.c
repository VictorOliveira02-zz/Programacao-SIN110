//EXERCICIO 2
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char endereco[50];
    int telefone[50];
} Pessoas;

int main()
{
    Pessoas pessoa[5];

    for (int cont = 0; cont < 5; cont++)
    {
        printf("\nDigite o nome: ");
        scanf("%s", &pessoa[cont].nome);

        printf("Digite o endereco: ");
        scanf("%s", &pessoa[cont].endereco);

        printf("Digite o telefone: ");
        scanf("%d", &pessoa[cont].telefone);
    }

    for (int cont = 0; cont < 5; cont++)
    {
        printf("\nNome: %s", pessoa[cont].nome);
        printf("\nEndereco: %s", pessoa[cont].endereco);
        printf("\nNumero: %d", pessoa[cont].telefone);
    }
    return 0;
}