// EXERCICIO 5 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int cont, num, multi = 1;

int main()
{
    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("%d! = ", num);
    for (cont = 1; cont <= num; cont++)
    {
        multi *= cont;
        printf(" x %d ", cont);
    }

    printf("= %d", multi);

    return 0;
}
