#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sProdutos
{
    char nome[15];
    char setor;
    int quantidade;
    float preco;
} Produtos;

void Mercadoria(Produtos *produto, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        printf("\nDigite o nome do produto: ");
        getchar();
        gets(produto[cont].nome);

        printf("\nDigite o setor: ");
        scanf("%c", &produto[cont].setor);

        printf("\nDigite a quantidade: ");
        getchar();
        scanf("%d", &produto[cont].quantidade);

        printf("\nDigite o preço: ");
        getchar();
        scanf("%f", &produto[cont].preco);
    }
}

void Confere(Produtos *produto, int qntd)
{
    int p = 0;
    char conf;

    printf("\nDigite o setor: ");
    scanf("%c", &conf);
    for (int cont = 0; cont < qntd; cont++)
    {
        if (strcpy(conf, produto[cont].setor))
        {
            p++;
        }
    }
    printf("Existem %d produtos cadastrados neste setor.", p);
}

void Capital(Produtos *produto, int qntd)
{
    float c = 0;

    for (int cont = 0; cont < qntd; cont++)
    {
        c = c + produto[cont].preco;
    }
    printf("Foi investido um total de %2.f Reais em produtos no Supermercado.", c);
}

int main()
{
    Produtos *produto;
    int opcao = 0, qntd = 1;

    printf("ESCOLHA UMA DAS OPCOES:");
    do
    {
        printf("\n[ 1 ] - Cadastrar Produtos.");
        printf("\n[ 2 ] - Verificar Estoque.");
        printf("\n[ 3 ] - Total de capital Investido .");
        printf("\n[ 4 ] - Sair.\n");

        printf("Sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Quantos produtos quer cadastrar ?: ");
            scanf("%d", &qntd);
            Mercadoria(produto, qntd);
            opcao = 0;
            break;

        case 2:
            Confere(produto, qntd);
            opcao = 0;
            break;

        case 3:
            Capital(produto, qntd);
            opcao = 0;
            break;

        case 4:
            printf("Saindo...");
            break;
        }
    } while (opcao == 0);

    return 0;
}