// EXERCICIO 9 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{
    float imagem, x;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    if (x <= 1)
    {
        imagem = 1;
        printf("x = %.2f\nimagem = %.2f\nf(x) = 1, se x <= 1", x, imagem);
    }
    else if (x > 1 && x <= 2)
    {
        imagem = 2;
        printf("x = %.2f\nimagem = %.2f\nf(x) = 2, se 1 <= x <= 2", x, imagem);
    }
    else if (x > 2 && x <= 5)
    {
        imagem = x * x;
        printf("x = %.2f\nimagem = x^2 = %.2f\nf(x) = x^2, se 2 < x <= 5", x, imagem);
    }
    else
    {
        imagem = (x * x) * x;
        printf("x = %.2f\nimagem = x^3 = %.2f\nf(x) = x^3, se x => 5", x, imagem);
    }

    return 0;
}