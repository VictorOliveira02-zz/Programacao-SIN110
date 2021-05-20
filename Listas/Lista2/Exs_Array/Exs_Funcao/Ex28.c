#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sBiblioteca
{
    char titulo[50];
    char autor[20];
    int n_pag;
} Biblioteca;

void Cadastro(Biblioteca *livro, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        printf("\nDigite o titulo do livro: ");
        getchar();
        gets(livro[cont].titulo);

        printf("Digite o autor do livro: ");
        gets(livro[cont].autor);

        printf("Digite a qntd de paginas: ");
        getchar();
        scanf("%d", &livro[cont].n_pag);
    }
}

void Disponiveis(Biblioteca *livro, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        printf("\n\nTitulo: %s", livro[cont].titulo);
        printf("\nAutor: %s", livro[cont].autor);
        printf("\nQntd pags: %d", livro[cont].n_pag);
    }
}

int main()
{
    Biblioteca livro[250];
    int qntd;

    printf("Qntos livros deseja cadastar agora? ");
    scanf("%d", &qntd);

    Cadastro(livro, qntd);
    Disponiveis(livro, qntd);

    return 0;
}