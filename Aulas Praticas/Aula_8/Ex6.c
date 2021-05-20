#include <stdio.h>
#include <string.h>

int main()
{
    int cont, j, tamvo;
    char string[20], vogais[] = "aeiouAEIOU";

    tamvo = strlen(vogais);

    puts("Digite uma palavra: ");
    gets(string);

    for (cont = 0; cont < strlen(string); cont++)
    {

        for (j = 0; j < tamvo; j++)
            if (string[cont] == vogais[j])
            {
                break;
            }
        if (j == tamvo)
            printf("%c", string[cont]);
    }

    return 0;
}
