#include <stdio.h>
#include <string.h>

int main()
{

    char txt[100];
    int conta = 0;
    char i;

    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL)
    {
        printf("Error");
    }

    while (fgets(txt, 100, arquivo) != NULL)
    {
        for (i = 'A'; i <= 'Z'; i++)
        {
            for (int cont = 0; txt[cont] != '\0'; cont++)
            {
                if (txt[cont] == i || txt[cont] == tolower(i))
                {
                    ++conta;
                }
            }
            if (conta != 0)
            {
                printf("%c - %d vezes\n", i, conta);
            }
            conta = 0;
        }
    }

    return 0;
}