#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen("resumo_TCC.txt", "w");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    int N;
    char *texto;

    printf("Digite a qntd de caracteres do resumo: ");
    scanf("%d", &N);

    texto = (char *)malloc(N * sizeof(char));
    if (texto == NULL)
    {
        printf("Error");
        exit(1);
    }

    getchar();
    printf("Digite o resumo do TCC: ");
    gets(texto);

    for (int i = 0; i < strlen(texto); i++)
    {
        fputc(texto[i], arquivo);
    }

    fclose(arquivo);
    free(texto);
    return 0;
}