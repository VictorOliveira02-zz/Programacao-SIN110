#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sProdutos
{
    int codigo;
    char nome[15];
    float preco;
    int qnt_estoque;
} Produtos;

int main()
{
    Produtos produto[5];
    int c_produto;
    int c_estoque;

    for (int cont = 0; cont < 5; cont++)
    {
        produto[cont].codigo = cont;

        printf("\nDigite o nome do produto %d: ", cont + 1);
        getchar();
        gets(produto[cont].nome);

        printf("Digite o preco do produto: ");
        getchar();
        scanf("%d", &produto[cont].preco);

        printf("Digite a qntd de estoque do produto: ");
        scanf("%d", &produto[cont].qnt_estoque);
    }

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &c_produto);

    printf("\nDigite a quantidade que deseja comprar: ");
    scanf("%d", &c_estoque);

    for (int cont = 0; cont < 5; cont++)
    {
        if (c_produto == produto[cont].codigo)
        {
            if (produto[cont].qnt_estoque >= c_estoque)
            {
                produto[cont].qnt_estoque -= c_estoque;
                printf("\nProduto %s encontrado!", produto[cont].nome);
                printf("\nNova qnt em estoque: %d", produto[cont].qnt_estoque);
                break;
            }
            else
            {
                printf("Produto esgotado!");
                break;
            }
        }
        else
        {
            printf("\nProduto invalido!\n");
            break;
        }
    }
    return 0;
}