//EXERCICIO 3

#include <stdio.h>
#include <string.h>

typedef struct sBiblioteca
{
    char titulo[30];
    char autor[15];
    int ano;
} Biblioteca;

int main()
{
    Biblioteca livro[5];
    char pesquisa[30];
    int codigo[5] = {-1, -1, -1, -1, -1};

    for (int cont = 0; cont < 5; cont++)
    {
        printf("\nDigite o Titulo do livro %d: ", cont + 1);
        scanf("%s", &livro[cont].titulo);

        printf("Digite o Autor do livro %d: ", cont + 1);
        fflush(stdin);
        scanf("%s", &livro[cont].autor);

        printf("Digite o Ano do livro %d: ", cont + 1);
        fflush(stdin);
        scanf("%d", &livro[cont].ano);
    }

    printf("\nDigite o titulo para pesquisa: ");
    fflush(stdin);
    scanf("%s", &pesquisa);

    int index = 0;
    for (int cont = 0; cont < 5; cont++)
    {
        if (strcmp(livro[cont].titulo, pesquisa))
        {
            codigo[index] = cont;
            index++;
        }
    }

    printf("\nLIVROS ENCONTRADOS:");
    for (int cont = 0; cont <= index; cont++)
    {
        if (codigo[0] != -1)
        {
            printf("\nTitulo: %s", livro[codigo[cont]].titulo);
            printf("\nAutor: %s", livro[codigo[cont]].autor);
            printf("\nAno: %d", livro[codigo[cont]].ano);
        }
        else
        {
            printf("Desculpe, nada foi encontrado!");
            break;
        }
    }

    printf("\nDigite o autor para pesquisa: ");
    fflush(stdin);
    scanf("%s", &pesquisa);

    int index = 0;
    for (int cont = 0; cont < 5; cont++)
    {
        if (strcmp(livro[cont].titulo, pesquisa))
        {
            codigo[index] = cont;
            index++;
        }
    }

    printf("\nAUTORES ENCONTRADOS:");
    for (int cont = 0; cont <= index; cont++)
    {
        if (codigo[0] != -1)
        {
            printf("\nTitulo: %s", livro[codigo[cont]].titulo);
            printf("\nAutor: %s", livro[codigo[cont]].autor);
            printf("\nAno: %d", livro[codigo[cont]].ano);
        }
        else
        {
            printf("Desculpe, nada foi encontrado!");
            break;
        }
    }

    printf("\nDigite o ano para pesquisa: ");
    fflush(stdin);
    scanf("%s", &pesquisa);

    int index = 0;
    for (int cont = 0; cont < 5; cont++)
    {
        if (strcmp(livro[cont].titulo, pesquisa))
        {
            codigo[index] = cont;
            index++;
        }
    }

    printf("\nANOS ENCONTRADOS:");
    for (int cont = 0; cont <= index; cont++)
    {
        if (codigo[0] != -1)
        {
            printf("\nTitulo: %s", livro[codigo[cont]].titulo);
            printf("\nAutor: %s", livro[codigo[cont]].autor);
            printf("\nAno: %d", livro[codigo[cont]].ano);
        }
        else
        {
            printf("Desculpe, nada foi encontrado!");
            break;
        }
    }
    return 0;
}