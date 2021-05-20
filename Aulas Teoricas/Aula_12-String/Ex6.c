//EXERCICIO 6

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = {"OLA"};
    char str2[50] = {"SABAO"};
    int qnt = 0;

    for (int cont = 0; cont < strlen(str2); cont++)
    {
        if (strcmp(str1[cont], str2[cont]))
        {
            qnt++;
        }
    }
    printf("Possui: %d \n", qnt);

    return 0;
}