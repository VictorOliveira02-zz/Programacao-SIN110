#include <stdio.h>
#include <stdlib.h>

void gab(char gabarito[10])
{
    printf("\nGabrito: \n");
    for (int cont = 0; cont < 10; cont++)
    {
        printf("Questao %d: \nAssinale a, b, c, d: ", cont + 1);
        scanf("%c", &gabarito[cont]);
        getchar();
    }
}

void resp(char resultado[10], char gabarito[10])
{
    int acertos[10], soma = 0;

    printf("\nResposta: \n");
    for (int cont = 0; cont < 10; cont++)
    {
        printf("Questao %d: \nAssinale a, b, c, d: ", cont + 1);
        scanf("%c", &resultado[cont]);
        getchar();
    }
    for (int cont = 0; cont < 10; cont++)
    {
        if (resultado[cont] == gabarito[cont])
        {
            soma++;
        }
        acertos[cont] = soma;
    }

    for (int cont = 0; cont < 10; cont++)
    {
        printf("\nAluno %d -> %d acertos", cont, acertos[cont]);
    }
    getchar();
}

int main()
{
    char gabarito[10], resultado[10];
    char matriz[5][10];

    gab(gabarito);
    resp(resultado, gabarito);

    return 0;
}