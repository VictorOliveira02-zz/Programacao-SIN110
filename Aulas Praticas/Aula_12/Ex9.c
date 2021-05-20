#include <stdio.h>
#include <stdlib.h>

typedef struct sCarros
{
    char marca[20];
    char cor[10];
    int n_porta;
    float preco;
} Carros;

int main()
{
    FILE *arquivo;
    arquivo = fopen("concessionaria.txt", "rb");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    Carros carro[20];
    for (int cont = 0; cont < 20; cont++)
    {
        fread(carro[cont].marca, sizeof(char), 20, arquivo);
        fread(carro[cont].cor, sizeof(char), 10, arquivo);
        fread(&carro[cont].n_porta, sizeof(int), 1, arquivo);
        fread(&carro[cont].preco, sizeof(float), 1, arquivo);
    }

    for (int cont = 0; cont < 3; cont++)
    {
        printf("%s\n%s\n%d\n%.2f\n", carro[cont].marca, carro[cont].cor, carro[cont].n_porta, carro[cont].preco);
    }

    fclose(arquivo);
    return 0;
}
