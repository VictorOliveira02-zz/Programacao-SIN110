#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("informacoes.txt", "rb");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    char marca[20];
    char cor[10];
    int n_porta;
    float preco;

    fread(marca, sizeof(char), 20, arquivo);
    fread(cor, sizeof(char), 10, arquivo);
    fread(&n_porta, sizeof(int), 1, arquivo);
    fread(&preco, sizeof(float), 1, arquivo);

    printf("%s\n%s\n%d\n%.2f\n", marca, cor, n_porta, preco);

    fclose(arquivo);
    return 0;
}
