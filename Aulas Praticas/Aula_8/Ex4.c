#include <stdio.h>
#include <string.h>

int main()
{

    char str[80], nome[60], ultimo[20], meio[20];

    puts("Digite seu Primeiro Nome: ");
    gets(nome);

    puts("Digite seu Ultimo Nome: ");
    gets(ultimo);

    puts("Digite seu Nome do meio: ");
    gets(meio);

    strcpy(str, nome);
    strcat(str, ultimo);
    strcat(str, meio);

    puts(str);

    return 0;
}