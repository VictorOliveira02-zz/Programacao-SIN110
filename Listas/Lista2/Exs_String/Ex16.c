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
        if (str[cont] == '1')
        {
            conta++;
        }
    }

    printf("%s -> %d", str, conta);

    return 0;
}