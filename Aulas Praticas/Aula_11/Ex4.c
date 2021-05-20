#include <stdio.h>

void preencheVetor(int *num, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        printf("Digite um valor: ");
        scanf("%d", &num[cont]);
    }
}

void imprimeVetor(int *num, int qntd)
{
    for (int cont = 0; cont < qntd; cont++)
    {
        printf("\n%d ", num[cont]);
    }
}

int maiorPar(int *num, int qntd)
{
    int maiorPar = 0;
    for (int cont = 0; cont < qntd; cont++)
    {
        if (num[cont] > maiorPar && num[cont] % 2 == 0)
        {
            maiorPar = num[cont];
        }
    }
    return maiorPar;
}

int menorImpar(int *num, int qntd)
{
    int menorImpar = 9999;
    for (int cont = 0; cont < qntd; cont++)
    {
        if (num[cont] < menorImpar && num[cont] % 2 != 0)
        {
            menorImpar = num[cont];
        }
    }
    return menorImpar;
}

int media(int *num, int qntd)
{
    int soma = 0, media;
    for (int cont = 0; cont < qntd; cont++)
    {
        soma += num[cont];
    }
    return media = soma / qntd;
}

int main()
{
    int *num, qntd;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &qntd);

    num = (int *)malloc(qntd * sizeof(int));
    if (num == NULL)
    {
        printf("Erro: Sem espaço de memoria");
        exit(1);
    }

    preencheVetor(num, qntd);
    imprimeVetor(num, qntd);
    printf("\n\nMaior Par: %d", maiorPar(num, qntd));
    printf("\nMenor Impar: %d", menorImpar(num, qntd));
    printf("\nMedia: %d", media(num, qntd));

    free(num);
    return 0;
}