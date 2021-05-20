#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int i = 2, j = 7;

    printf("Digite uma string: ");
    gets(str);

    for (int cont = i; cont <= j; cont++)
    {
        printf("%c", str[cont]);
    }

    return 0;
}