#include <stdio.h>

typedef struct sAluno
{
    int matricula;
    char sobrenome[10];
    int ano;
} Aluno;

int main()
{
    Aluno *aluno;

    int qntd;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qntd);

    aluno = (Aluno *)malloc(qntd * sizeof(Aluno));
    if (aluno == NULL)
    {
        printf("Erro: Sem memoria disponivel");
        exit(1);
    }

    for (int cont = 0; cont < qntd; cont++)
    {
        printf("\nDigite a matricula: ");
        scanf("%d", &aluno[cont].matricula);

        printf("Digite o sobrenome: ");
        getchar();
        gets(aluno[cont].sobrenome);

        printf("Digite o ano de Nasc: ");
        scanf("%d", &aluno[cont].ano);
    }

    for (int cont = 0; cont < qntd; cont++)
    {
        printf("%d %s %d\n", aluno[cont].matricula, aluno[cont].sobrenome, aluno[cont].ano);
    }

    free(aluno);
    return 0;
}