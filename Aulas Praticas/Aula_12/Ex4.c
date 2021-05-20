#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arquivo;

    arquivo = fopen("dialogo.txt", "a");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    fputc("\n", arquivo);
    fputs("FIM!", arquivo);

    fclose(arquivo);
    return 0;
}