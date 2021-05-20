#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sCadastro
{
    char nome[20];
    char endereco[50];
    int idade;
} Cadastro;

void Cadastrar(Cadastro *pessoa, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {

        printf("\nDigite o nome: ");
        getchar();
        gets(pessoa[cont].nome);

        printf("Digite o endereco: ");
        gets(pessoa[cont].endereco);

        printf("Digite a idade: ");
        getchar();
        scanf("%d", &pessoa[cont].idade);
    }
}

void Imprimir(Cadastro *pessoa, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        printf("\nNome: %s", pessoa[cont].nome);
        printf("\nEndereco: %s", pessoa[cont].endereco);
        printf("\n\nDigite a idade: %d", pessoa[cont].idade);
    }
}

int main()
{
    Cadastro *pessoa[10];
    int qntd;

    printf("Quantos cadastros deseja fazer ?: ");
    scanf("%d", &qntd);
    getchar();

    Cadastrar(pessoa, qntd);
    Imprimir(pessoa, qntd);

    return 0;
}