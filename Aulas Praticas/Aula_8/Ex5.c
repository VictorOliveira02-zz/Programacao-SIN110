#include <stdio.h>
#include <string.h>

int main()
{
    char string[20], inversa[20];

    puts("Digite uma palavra: ");
    gets(string);

    strcpy(inversa, string);
    strrev(inversa);

    int str = strcmp(string, inversa);
    if (str == 0)
    {
        puts("Sim");
    }
    else
    {
        puts("Nao");
    }

    return 0;
}