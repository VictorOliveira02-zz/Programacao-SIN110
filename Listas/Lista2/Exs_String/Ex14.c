#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int conta = 0;

    printf("Digite uma string: ");
    gets(str);

    for (int cont = 0; cont < 50; cont++)
    {
        if (str[cont] == ' ')
        {
            conta++;
        }
    }

    printf("%s tem %d espaco", str, conta);

    return 0;
}