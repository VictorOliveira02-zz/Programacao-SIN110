//EXERCICIO 2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s, *vogais = "aeiouAEIOU";
    ;
    int tam_v;

    printf("Digite tamanho da string: ");
    scanf("%d", &tam_v);

    getchar();

    s = (char *)malloc(tam_v * sizeof(char));

    printf("Digite a String: ");
    gets(s);

    for (int cont = 0; cont < tam_v; ++cont)
    {
        if (!(strchr(vogais, s[cont])))
        {
            printf("%c", s[cont]);
        }
    }

    free(s);
    return 0;
}