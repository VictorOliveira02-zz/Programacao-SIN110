#include <stdio.h>

typedef struct sAluno
{
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main()
{
    Aluno alunos[5];

    float maiorP1 = 0, maiorMedia = 0, menorMedia = 9999, media[5];
    char melhorMedia[100], piorMedia[100];

    for (int cont = 0; cont < 5; cont++)
    {
        printf("\nDigite o dado do Aluno: matricula, nome, P1, P2, P3\n");
        printf("Aluno %d: ", cont + 1);
        scanf("%d %s %f %f %f", &alunos[cont].matricula, alunos[cont].nome, &alunos[cont].nota1, &alunos[cont].nota2, &alunos[cont].nota3);

        media[cont] = (alunos[cont].nota1 + alunos[cont].nota2 + alunos[cont].nota3) / 3;

        if (media[cont] < menorMedia)
        {
            menorMedia = media[cont];
            strcpy(piorMedia, alunos[cont].nome);
        }

        if (media[cont] > maiorMedia)
        {
            maiorMedia = media[cont];
            strcpy(melhorMedia, alunos[cont].nome);
        }

        if (alunos[cont].nota1 > maiorP1)
        {
            maiorP1 = alunos[cont].nota1;
        }
    }

    printf("\nAluno com maior media geral(%.2f): %s", maiorMedia, melhorMedia);
    printf("\nAluno com menor media geral(%.2f): %s", menorMedia, piorMedia);

    for (int cont = 0; cont < 5; cont++)
    {
        if (maiorP1 == alunos[cont].nota1)
        {
            printf("\nAluno com maior Nota P1(%.2f): %s", maiorP1, alunos[cont].nome);
        }
    }

    for (int cont = 0; cont < 5; cont++)
    {
        if (media[cont] > 60)
        {
            printf("\nAPROVADO!");
        }
        else
        {
            printf("\nREPROVADO!");
        }
    }

    return 0;
}