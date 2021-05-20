//EXERCICIO 4

#include <stdio.h>
#include <string.h>

int main()
{

    char s[] = "Fulano";
    int i = 2, j = 5, cont;

    for (cont = i; cont <= j; cont++)
    {
        printf("%c", s[cont]);
    }

    return 0;
}
