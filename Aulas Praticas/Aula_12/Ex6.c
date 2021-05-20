#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("informacoes.txt", "wb");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    char marca[20] = "Volksvagem";
    char cor[10] = "verde";
    int n_porta = 4;
    float preco = 35000;

    fwrite(marca, sizeof(char), 20, arquivo);
    fwrite(cor, sizeof(char), 10, arquivo);
    fwrite(&n_porta, sizeof(int), 1, arquivo);
    fwrite(&preco, sizeof(float), 1, arquivo);

    fclose(arquivo);
    return 0;
}
