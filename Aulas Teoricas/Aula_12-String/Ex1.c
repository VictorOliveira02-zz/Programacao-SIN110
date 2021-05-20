//EXERCICIO 1

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[10];

    printf("Digite seu nome:");
    gets(nome);

    for (int cont = 0; cont < 4; cont++)
    {
        printf("%c\n", nome[cont]);
    }

    return 0;
}