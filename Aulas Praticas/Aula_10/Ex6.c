#include <stdio.h>
#include <string.h>

typedef struct sAluno
{
    char nome[20];
    char matricula[4];
    float nota;
} Aluno;

void aluno(char nome[20], char matricula[4], float nota)
{

    int maior = 0;
    char melhor[20], mat[4];
    if (nota > maior)
    {
        maior = nota;
        strcpy(mat, matricula);
        strcpy(melhor, nome);
    }
    printf("\n%s", melhor);
    printf("\n%s", mat);
    printf("\n%.2f", maior);
}

int main()
{
    Aluno alunos[3];

    for (int cont = 0; cont < 3; cont++)
    {
        printf("\n\nDigite nome do aluno %d:", cont + 1);
        fflush(stdin);
        gets(alunos[cont].nome);

        printf("Digite a matricula: ");
        fflush(stdin);
        gets(alunos[cont].matricula);

        printf("Digite a nota: ");
        scanf("%f", &alunos[cont].nota);
    }
    for (int cont = 0; cont < 3; cont++)
    {
        aluno(alunos[cont].nome, alunos[cont].matricula, alunos[cont].nota);
    }
    return 0;
}