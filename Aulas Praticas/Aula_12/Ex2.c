#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen("resumo_TCC.txt", "r");

    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    char texto;
    texto = fgetc(arquivo);

    while (texto != EOF)
    {
        printf("%c", texto);
        texto = fgetc(arquivo);
    }

    fclose(arquivo);
    return 0;
}