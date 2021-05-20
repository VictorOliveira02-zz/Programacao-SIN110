#include <stdio.h>

int main()
{

    char palavra[50];
    int cont = 0;

    printf("Digite uma palavra: ");
    gets(palavra);

    while (palavra[cont] != '\0')
    {
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}

// 1 - A
#include <stdio.h>
#include <string.h>

int main()
{

    char palavra[50];
    gets(palavra);

    printf("%d\n", strlen(palavra));

    return 0;
}