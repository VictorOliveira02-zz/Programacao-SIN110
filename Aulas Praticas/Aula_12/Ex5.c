#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sFuncionario
{
    char nome[20];
    int tempServico;
} Funcionario;

void cadastro(Funcionario funcionario[], int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        getchar();
        printf("\nDigite o nome do %d funcionario: ", cont + 1);
        gets(funcionario[cont].nome);

        printf("Digite a qntd de anos de servico: ");
        scanf("%d", &funcionario[cont].tempServico);
    }
}

void salvar_txt(Funcionario funcionario[], int qntd)
{
    FILE *arquivo;
    arquivo = fopen("emp.txt", "w");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    for (int cont = 0; cont < qntd; cont++)
    {
        fprintf(arquivo, "%s %d\n", funcionario[cont].nome, funcionario[cont].tempServico);
    }

    fclose(arquivo);
}

void ler_txt(Funcionario funcionario[], int qntd)
{
    FILE *arquivo;
    arquivo = fopen("emp.txt", "r");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    for (int cont = 0; cont < qntd; cont++)
    {
        fscanf(arquivo, "%s %d", funcionario[cont].nome, &funcionario[cont].tempServico);
        printf("\n%s - %d", funcionario[cont].nome, funcionario[cont].tempServico);
    }

    fclose(arquivo);
}

int main()
{
    Funcionario funcionario[50];
    int qntd;

    printf("Digite a qntd de funcionarios para cadastrar: ");
    scanf("%d", &qntd);

    cadastro(funcionario, qntd);
    salvar_txt(funcionario, qntd);
    ler_txt(funcionario, qntd);

    return 0;
}