#include <stdio.h>
#include <stdlib.h>

int soma(int num)
{
    int n = (num == 1) ? 1 : num + soma(num - 1);
    return n;
}

int main()
{
    int num;

    printf("Digite o valor de num: ");
    scanf("%d", &num);

    printf("A soma dos numeros de 1 ate %d = %d", num, soma(num));

    return 0;
}