#include <stdio.h>

int main()
{
    float maior = 0, menor = 0, preco_kwh, consumo, soma_consumo = 0, media_consumo;
    int cont;

    printf("Digite o preco do Kwh: ");
    scanf("%f", &preco_kwh);

    for (cont = 1; cont < 16; cont++)
    {
        printf("Digite o consumo da residencia %d: ", cont);
        scanf("%f", &consumo);

        soma_consumo += consumo;

        if (cont == 1)
        {
            maior = consumo;
            menor = consumo;
        }
        else if (consumo > maior)
        {
            maior = consumo;
        }

        else if (consumo < menor)
        {
            menor = consumo;
        }
    }

    media_consumo = soma_consumo / 15;

    printf("\nMedia: %.2f", media_consumo);
    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);

    return 0;
}