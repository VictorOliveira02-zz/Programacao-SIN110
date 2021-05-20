//EXERCICIO 5

#include <stdio.h>
#include <stdlib.h>

typedef struct sAlunos
{
    char nome[50];
    int matricula;
    float nota;
    char endereco[50];
} Aluno;

int main()
{
    Aluno *aluno;
    int tam_v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_v);

    aluno = (int *)malloc(tam_v * sizeof(int));

    for (int cont = 0; cont < tam_v; cont++)
    {
        printf("\nDigite o nome do aluno %d: ", cont + 1);
        getchar();
        gets(aluno[cont].nome);

        printf("Digite a matricula: ");
        getchar();
        scanf("%d", &aluno[cont].matricula);

        printf("Digite a nota: ");
        scanf("%f", &aluno[cont].nota);

        printf("Digite a endereco: ");
        getchar();
        gets(aluno[cont].endereco);
    }

    free(aluno);
    return 0;
}