#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura[50], maiorA = 0, menorA = 9999;
    int tam = 5, maiorN = 0, menorN = 9999;
    int numero[50];

    for (int cont = 0; cont < tam; cont++)
    {
        printf("Digite a ALTURA(cm) e o NUMERO do aluno %d: ", cont + 1);
        scanf("%f%d", &altura[cont], &numero[cont]);

        if (altura[cont] > maiorA)
        {
            maiorA = altura[cont];
            maiorN = numero[cont];
        }

        if (altura[cont] < menorA)
        {
            menorA = altura[cont];
            menorN = numero[cont];
        }
    }

    printf("\n");

    printf("Aluno mais alto: %.2f(%d)\nAluno mais baixo: %.2f(%d)", maiorA, maiorN, menorA, menorN);

    return 0;
}