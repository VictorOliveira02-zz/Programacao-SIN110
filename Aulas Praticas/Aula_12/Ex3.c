#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arquivo;

    arquivo = fopen("dialogo.txt", "w");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    int n;
    char dialogo[20];

    printf("Digite a qntd de dialogos: ");
    scanf("%d", &n);

    getchar();

    for (int cont = 0; cont < n; cont++)
    {
        printf("Digite a %d fala: ", cont + 1);
        gets(dialogo);
        fputs(dialogo, arquivo);
        fputc('\n', arquivo);
    }

    fclose(arquivo);
    return 0;
}