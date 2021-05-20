//EXERCICIO 5

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Oi";
    char str2[] = "Bom dia";
    int N = strlen(str2);

    strcpy(str1, str2);
    for (int cont = 0; cont < N; cont++)
    {
        strcat(str1[cont], str2[cont]);
        printf("%s", str1[cont]);
    }

    return 0;
}
