#include <stdio.h>
#include <stdlib.h>

typedef struct sAluno
{
    char nome[20];
    int mat;
    float CR;
} Aluno;

void Imprimir(Aluno aluno[], int cont)
{
    (cont < 10) ? 1 : Imprimir(aluno, cont + 1);
    printf("%s - %d - %.2f", aluno[cont].nome, aluno[cont].mat, aluno[cont].CR);
}

int main()
{
    Aluno aluno[10];

    for (int cont = 0; cont < 10; cont++)
    {
        printf("\nDigite o nome do aluno %d: ", cont + 1);
        getchar();
        gets(aluno[cont].nome);

        printf("Digite a matricula: ");
        scanf("%d", &aluno[cont].mat);

        printf("Digite o CR: ");
        getchar();
        scanf("%f", &aluno[cont].mat);
    }

    Imprimir(aluno, 10);

    return 0;
}