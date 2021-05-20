// EXERCICIO 8

#include <stdio.h>

int main()
{

    int num = 1234;
    int digito1, digito2, digito3, digito4;

    digito1 = num / 1000;
    digito3 = num / 100 - 10 * digito1;
    digito2 = num / 10 - 100 * digito1 - 10 * digito3;
    digito4 = num / 1 - 1000 * digito1 - 100 * digito3 - 10 * digito2;

    printf("->%d\n%d\n%d\n%d\n%d", num, digito1, digito3, digito2, digito4);

    return 0;
}