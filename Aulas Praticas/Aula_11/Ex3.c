#include <stdio.h>
#include <string.h>

typedef struct sCliente
{
    char nome[50];
    int idade;
    int telefone;
} Cliente;

void lerDados(Cliente *cliente, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        printf("\nDigite o nome: ");
        getchar();
        gets(cliente[cont].nome);

        printf("Digite a idade: ");
        scanf("%d", &cliente[cont].idade);

        printf("Digite o telefone: ");
        scanf("%d", &cliente[cont].telefone);
    }
}

void imprimeDados(Cliente *cliente, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        printf("\n%s\n%d\n%d\n\n", cliente[cont].nome, cliente[cont].idade, cliente[cont].telefone);
    }
}

int main()
{
    Cliente *cliente;
    int qntd;

    printf("Digite a quantidade de clientes: ");
    scanf("%d", &qntd);

    cliente = (Cliente *)malloc(qntd * sizeof(Cliente));
    if (cliente == NULL)
    {
        printf("Erro: Sem memoria disponivel");
        exit(1);
    }

    lerDados(cliente, qntd);
    imprimeDados(cliente, qntd);

    free(cliente);
    return 0;
}