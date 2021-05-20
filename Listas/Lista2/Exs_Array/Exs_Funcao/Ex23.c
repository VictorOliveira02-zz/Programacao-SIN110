#include <stdio.h>
#include <stdlib.h>

void Categoria(int idade)
{
    if (idade >= 0 && idade <= 7)
    {
        printf("Infantil A\n");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Infantil B\n");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Juvenil A\n");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Juvenil B\n");
    }
    else if (idade >= 18)
    {
        printf("Adulto\n");
    }
    else
    {
        printf("Sem categoria\n");
    }
}

int main()
{
    int Idade;

    printf("Digite a idade do aluno:");
    scanf("%d", &Idade);

    printf("Categoria: ");
    Categoria(Idade);

    return 0;
}