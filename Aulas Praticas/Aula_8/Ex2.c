#include <stdio.h>
#include <string.h>

int main()
{

    char palavra[20], palavra2[20];

    gets(palavra);
    gets(palavra2);

    if (strcmp(palavra, palavra2) == 0)
    {
        printf("Sim");
    }
    else
    {
        printf("Nao");
    }

    return 0;
}