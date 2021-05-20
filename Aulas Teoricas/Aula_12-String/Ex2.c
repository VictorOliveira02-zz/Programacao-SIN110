//EXERCICIO 2

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];

    printf("Digite seu nome:");
    gets(nome);

    for (int cont = strlen(nome); cont >= 0; cont--)
    {
        printf("%c\n", nome[cont]);
    }

    return 0;
}
