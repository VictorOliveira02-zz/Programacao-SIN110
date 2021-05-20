#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char cara;

    arquivo = fopen("arq.txt", "w");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    do
    {
        printf("Digite uma palavra / SAIR: ");
        scanf("%c", &cara);

        fprintf(arquivo, "%c", &cara);

    } while (cara != 'S');

    do
    {
        cara = fgetc(arquivo);

        printf("%c ", cara);

    } while (cara != EOF);

    fclose(arquivo);

    return 0;
}