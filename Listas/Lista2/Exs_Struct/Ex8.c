#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sAluno
{
    char nome[20];
    int matricula;
    float P1;
    float P2;
    float P3;
    float media;
    char situacao[20];
} Aluno;

void Dados_Aluno(Aluno *aluno)
{
    float maiorM = 0, menorM = 9999;
    int maiorP1 = 0;
    char alunoP1[20], alunoM[20], alunoMM[20];

    for (int cont = 0; cont < 5; cont++)
    {
        printf("\nDigite o nome do aluno %d: ", cont + 1);
        getchar();
        gets(aluno[cont].nome);

        printf("Digite a matricula: ");
        getchar();
        scanf("%d", &aluno[cont].matricula);

        printf("Digite, respectivamente, as notas da P1, P2 e P3: ");
        getchar();
        scanf("%f%f%f", &aluno[cont].P1, &aluno[cont].P2, &aluno[cont].P3);

        aluno[cont].media = aluno[cont].P1 + aluno[cont].P2 + aluno[cont].P3 / 3;

        if (aluno[cont].P1 > maiorP1)
        {
            strcpy(alunoP1, aluno[cont].nome);
        }

        if (aluno[cont].media > maiorM)
        {
            strcpy(alunoM, aluno[cont].nome);
        }

        if (aluno[cont].media < menorM)
        {
            strcpy(alunoMM, aluno[cont].nome);
        }

        if (aluno[cont].media >= 60)
        {
            strcpy(aluno[cont].situacao, "APROVADO!");
        }
        else
        {
            strcpy(aluno[cont].situacao, "REPROVADO!");
        }
    }

    for (int cont = 0; cont < 5; cont++)
    {
        printf("\nAluno: %s - Situacao: %s", aluno[cont].nome, aluno[cont].situacao);
    }

    printf("\n\nAluno com maior nota na P1: %s", alunoP1);
    printf("\nAluno com maior media geral: %s", alunoM);
    printf("\nAluno com menor media geral: %s", alunoMM);
}

int main()
{
    Aluno aluno[5];

    Dados_Aluno(aluno);

    return 0;
}