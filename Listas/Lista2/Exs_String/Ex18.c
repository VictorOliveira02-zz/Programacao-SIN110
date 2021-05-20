#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nome[50];
    char sobrenome[100];

    printf("Digite um nome: ");
    gets(nome);

    printf("Digite o sobrenome: ");
    gets(sobrenome);

    printf(strcat(nome, sobrenome));

    return 0;
}