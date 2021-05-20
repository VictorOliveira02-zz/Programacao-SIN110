#include <stdio.h>

int main()
{
    int *num;
    num = (int *)malloc(5 * sizeof(int));

    if (num == NULL)
    {
        printf("Erro: Sem espaço de memoria");
        exit(1);
    }

    for (int cont = 0; cont < 5; cont++)
    {
        printf("Digite um valor: ");
        scanf("%d", &num[cont]);
    }

    for (int cont = 0; cont < 5; cont++)
    {
        printf("%d ", num[cont]);
    }

    free(num);
    return 0;
}