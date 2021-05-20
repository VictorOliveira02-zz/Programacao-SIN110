// EXERCICIO 6 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{
    int lado1=2, lado2=2, lado3=6;

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("TRIANGULO EQUILATERO");
    }

    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        printf("TRIANGULO ISOCELES");
    }
    else
    {
        printf("TRIANGULO ESCALENO");
    }

    return 0;
}
