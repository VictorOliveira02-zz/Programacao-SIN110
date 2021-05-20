// Exercicio 7

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    switch (idade)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Sem Categoria");
        break;

    case 5:
    case 6:
    case 7:
        printf("Categoria: Infantil A");
        break;

    case 8:
    case 9:
    case 10:
        printf("Categoria: Infantil B");
        break;

    case 11:
    case 12:
    case 13:
        printf("Categoria: Juvenil A");
        break;

    case 14:
    case 15:
    case 16:
    case 17:
        printf("Categoria: Juvenil B");
        break;

    default:
        printf("Categoria: Sênior");
    }

    return 0;
}