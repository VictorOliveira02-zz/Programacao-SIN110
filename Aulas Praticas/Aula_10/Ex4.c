#include <stdio.h>
#include <string.h>

typedef struct sPessoa
{
    char nome[20];
    int idade;
} Pessoa;

int main()
{
    Pessoa p = {"Victor", 19};

    int *pidade;

    pidade = &p.idade;

    printf("%s %d", p.nome, *pidade);

    return 0;
}