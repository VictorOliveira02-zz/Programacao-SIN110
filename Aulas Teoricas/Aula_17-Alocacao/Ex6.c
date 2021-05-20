//EXERCICIO 6

#include <stdio.h>
#include <stdlib.h>

typedef struct sAlunos
{
    char nome[50];
    int matricula;
    float nota;
    char endereco[50];
} Aluno;

void Cadastrar(Aluno *aluno, int tam_v)
{
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
}

void Imprimir(Aluno *aluno, int tam_v)
{
    for (int cont = 0; cont < tam_v; cont++)
    {
        printf("\n\nNome: %s", aluno[cont].nome);
        printf("\nMatricula: %d ", aluno[cont].matricula);
        printf("\nNota: %.2f", aluno[cont].nota);
        printf("\nEndereco: %s", aluno[cont].endereco);
    }
}

int MaiorNota(Aluno *aluno, int tam_v)
{
    int maior = 0;
    for (int cont = 0; cont < tam_v; cont++)
    {
        if (aluno[cont].nota > maior)
        {
            maior = cont + 1;
        }
    }
    return printf("\n\nIndice Maior Nota: %d", maior);
}

int main()
{
    Aluno *aluno;
    int tam_v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_v);

    aluno = (Aluno *)malloc(tam_v * sizeof(Aluno));

    Cadastrar(aluno, tam_v);
    Imprimir(aluno, tam_v);
    MaiorNota(aluno, tam_v);

    free(aluno);
    return 0;
}