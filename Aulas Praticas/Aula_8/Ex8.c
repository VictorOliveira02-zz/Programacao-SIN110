#include <stdio.h>

int main()
{

    char string[20], letra1, letra2;

    puts("Digite uma palavra: ");
    gets(string);

    printf("Digite duas letras: ");
    fflush(stdin);
    scanf("%c%c", &letra1, &letra2);

    int tam = strlen(string);
    for (int cont = 0; cont < tam; cont++)
    {
        if (string[cont] == letra1)
        {
            string[cont] = letra2;
        }
    }
    printf("%s", string);

        return 0;
}