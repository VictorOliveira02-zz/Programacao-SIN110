#include <stdio.h>
#include <string.h>

int main()
{
    int cont, j, tamvo, contv = 0, contc = 0;
    char string[20], vogais[] = "aeiouAEIOU";

    tamvo = strlen(vogais);

    puts("Digite uma palavra: ");
    gets(string);

    for (cont = 0; cont < strlen(string); cont++)
    {

        for (j = 0; j < tamvo; j++)
            if (string[cont] == vogais[j])
            {
                contv++;
                break;
            }
        if (j == tamvo)
        {
            contc++;
        }
    }

    printf("Vogais: %d", contv);
    printf("\nConsoantes: %d", contc);

    return 0;
}
