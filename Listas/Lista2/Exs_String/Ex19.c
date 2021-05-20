#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Digite uma string: ");
    gets(str);

    int tam = strlen(str);

    for (int cont = tam; cont >= 0; cont--)
    {
        printf("%c", str[cont]);
    }

    return 0;
}