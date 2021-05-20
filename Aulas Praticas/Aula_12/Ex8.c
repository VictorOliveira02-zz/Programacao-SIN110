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
    arquivo = fopen("concessionaria.txt", "wb");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    Carros carro[20];
    int qnt;

    printf("Digite qnt de carros para cadastro: ");
    scanf("%d", &qnt);

    for (int cont = 0; cont < qnt; cont++)
    {
        fflush(stdin);
        printf("\nDigite a marca do veiculo %d: ", cont + 1);
        gets(carro[cont].marca);

        printf("Digite a cor do veiculo: ");
        gets(carro[cont].cor);

        printf("Digite a qnt de portas: ");
        fflush(stdin);
        scanf("%d", &carro[cont].n_porta);

        printf("Digite o preco do veiculo: ");
        scanf("%f", &carro[cont].preco);
    }

    for (int cont = 0; cont < qnt; cont++)
    {

        fwrite(carro[cont].marca, sizeof(char), 20, arquivo);
        fwrite(carro[cont].cor, sizeof(char), 10, arquivo);
        fwrite(&carro[cont].n_porta, sizeof(int), 1, arquivo);
        fwrite(&carro[cont].preco, sizeof(float), 1, arquivo);
    }

    fclose(arquivo);
    return 0;
}
