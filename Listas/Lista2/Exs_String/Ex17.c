#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50], vogais[] = "aeiouAEIOU";

    printf("Digite uma string: ");
    gets(str);

    int j;
    for (int cont = 0; cont < strlen(str); cont++)
    {

        for (j = 0; j < strlen(vogais); j++)
            if (str[cont] == vogais[j])
                break;

        if (j == strlen(vogais))
            printf("%c", str[cont]);
    }

    return 0;
}