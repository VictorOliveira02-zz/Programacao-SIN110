// EXERCICIO 8 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int main()
{
    int num_pessoas, idade, cont;
    float peso, soma_peso = 0;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &num_pessoas);

    for (cont = 0; cont <= num_pessoas; cont++)
    {
        printf("Digite a idade e o peso(kg) da pessoa %d: ", cont + 1);
        scanf(" %d%f", &idade, &peso);

        if (idade > 30)
        {
            soma_peso += peso;
        }
    }

    printf("Pessoas acimas dos 30 anos, somam: %.2f kg", soma_peso);
    return 0;
}