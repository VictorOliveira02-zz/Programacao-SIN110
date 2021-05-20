//EXERCICIO 1
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[20];
    float preco;
} Produto;

int main()
{
    Produto mercadoria;

    printf("Digite o nome do produto: ");
    scanf("%s", &mercadoria.nome);

    printf("Digite o valor do produto: ");
    fflush(stdin);
    scanf("%f", &mercadoria.preco);

    printf("Produto: %s\nPreco: R$ %.2f", mercadoria.nome, mercadoria.preco);

    return 0;
}