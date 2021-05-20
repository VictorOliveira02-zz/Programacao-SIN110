#include <stdio.h>

int main()
{
    float num, soma = 0, MA, vezes;

    printf("Quantos numeros desejos somar?  ");
    scanf("%f", &vezes);

    for (int cont = 0; cont < vezes; cont++)
    {
        printf("Digite o %d valor: ", cont + 1);
        scanf(" %f", &num);

        soma += num;
    }
    MA = 1 / vezes * soma;

    printf("MA = %.2f", MA);

    return 0;
}
