// EXERCICIO 5

#include <stdio.h>
#include <string.h>

typedef struct sAluno
{
    char nome[20];
    char matricula;
    float nota;

} Aluno;

void recebe(Aluno *a, int len)
{
    float maior = 0, menor = 99999;
    char alunoMaior[20], alunoMenor[20];
    char matMaior, matMenor;

    for (int cont = 0; cont < len; cont++)
    {
        if (a[cont].nota > maior)
        {
            maior = a[cont].nota;
            strcpy(alunoMaior, a[cont].nome);
            strcpy(matMaior, a[cont].matricula);
        }

        if (a[cont].nota < menor)
        {
            menor = a[cont].nota;
            strcpy(alunoMenor, a[cont].nome);
            strcpy(matMenor, a[cont].matricula);
        }
    }

    printf("Melhor Aluno:\nNome: %s - Matricula: %c - Nota: %.2f", alunoMaior, matMaior, maior);
    printf("Pior Aluno:\nNome: %s - Matricula: %c - Nota: %.2f", alunoMenor, matMenor, menor);
}

int main()
{
    Aluno alunos[3];

    for (int cont = 0; cont < 3; cont++)
    {
        getchar();
        printf("\nDigite nome do aluno %d: ", cont + 1);
        gets(alunos[cont].nome);

        printf("Digite a matricula: ");
        getchar();
        scanf("%c", &alunos[cont].matricula);

        printf("Digite a nota: ");
        getchar();
        scanf("%f", &alunos[cont].nota);
    }

    recebe(alunos, 3);

    return 0;
}