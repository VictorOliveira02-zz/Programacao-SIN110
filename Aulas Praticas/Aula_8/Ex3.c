#include <stdio.h>

int main()
{

    char veiculos[5][20];
    float consumo[5], maior;

    for (int cont = 0; cont < 5; cont++)
    {
        printf("Digite o nome do veiculo: ");
        gets(veiculos[cont]);
    }

    for (int cont = 0; cont < 5; cont++)
    {
        printf("Digite o respectivo consumo: ");
        scanf("%f", &consumo[cont]);
    }

    maior = consumo[0];
    int temp;
    for (int cont = 1; cont < 5; cont++)
    {
        if (consumo[cont] > maior)
        {
            maior = consumo[cont];
            temp = cont;
        }
    }

    printf("\n%s", veiculos[temp]);

    for (int cont = 0; cont < 5; cont++)
    {
        printf("\n%s - %.2f", veiculos[cont], (1000 / consumo[cont]));
    }

    return 0;
}