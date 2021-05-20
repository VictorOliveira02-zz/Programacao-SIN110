// EXERCICIO 3

#include <stdio.h>

int main()
{
    int num, sair, infinito = 1;
    int soma = 0, qnt = 0, maior = 0, menor;
    int qnt_par = 0, soma_par = 0;
    float media, media_pares;

    printf("\n[1] - Soma dos numeros digitados");
    printf("\n[2] - Quantidade de numeros digitados");
    printf("\n[3] - Media dos numeros digitados");
    printf("\n[4] - Maior numero digitado");
    printf("\n[5] - Menor numero digitado");
    printf("\n[6] - Media dos numeros pares");

    while (infinito != 0)
    {
        printf("\nDigite UM numero: ");
        scanf(" %d", &num);

        if (num % 2 == 0)
        {
            qnt_par++;
            soma_par += num;
            media_pares = soma / qnt;
        }

        if (num > maior)
        {
            maior = num;
        }

        if (num < menor)
        {
            menor = num;
        }

        qnt++;
        soma += num;
        media = soma / qnt;

        printf("\nQualquer valor para continuar / 0 para SAIR: ");
        scanf("%d", &sair);
        if (sair == 0)
        {
            break;
        }
    }

    printf("\n[1] - Soma dos numeros digitados: %d", soma);
    printf("\n[2] - Quantidade de numeros digitados: %d", qnt);
    printf("\n[3] - Media dos numeros digitados: %.2f", media);
    printf("\n[4] - Maior numero digitado: %d", maior);
    printf("\n[5] - Menor numero digitado: %d", menor);
    printf("\n[6] - Media dos numeros pares: %.2f", media_pares);

    return 0;
}