#include <stdio.h>
#include <string.h>

typedef struct sCarros
{
    char modelo[20];
} Carros;

int main()
{
    Carros carro[5];
    float consumo[5], maiorC = 0;
    char maior[20];

    for (int cont = 0; cont < 5; cont++)
    {
        printf("Digite o nome do veiculo: ");
        gets(carro[cont].modelo);
    }

    for (int cont = 0; cont < 5; cont++)
    {
        printf("Digite o respectivo consumo: ");
        fflush(stdin);
        scanf("%f", &consumo[cont]);

        if (consumo[cont] > maiorC)
        {
            strcpy(maior, carro[cont].modelo);
        }
    }

    printf("\n%s", maior);
    for (int cont = 0; cont < 5; cont++)
    {
        printf("\n%s - %.2f", carro[cont].modelo, (1000 / consumo[cont]));
    }

    return 0;
}