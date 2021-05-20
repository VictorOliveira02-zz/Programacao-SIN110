#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sCarros
{
    char marca[15];
    int ano;
    float preco;
} Carros;

int main()
{
    Carros carro[5];
    float P = -1;

    for (int cont = 0; cont < 5; cont++)
    {
        printf("\nDigite a marca do carro: ");
        getchar();
        gets(carro[cont].marca);

        printf("Digite o ano do carro: ");
        getchar();
        scanf("%d", &carro[cont].ano);

        printf("Digite o preco do carro: ");
        scanf("%f", &carro[cont].preco);
    }

    while (P != 0)
    {
        printf("\nDigite o valor P ou ZERO p/ SAIR: ");
        scanf("%f", &P);

        for (int cont = 0; cont < 5; cont++)
        {
            if (carro[cont].preco < P)
            {
                printf("\n%s - R$ %.2f", carro[cont].marca, carro[cont].preco);
            }
        }
    }

    return 0;
}