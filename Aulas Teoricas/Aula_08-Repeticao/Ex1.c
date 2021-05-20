//EXERCICIO 1

#include <stdio.h>

int main()
{
    float base, altura, area;

    do
    {
        printf("Digite a BASE e a ALTURA do triangulo: ");
        scanf("%f%f", &base, &altura);

    } while (base <= 0 || altura <= 0);

    area = (base * altura) / 2;

    printf("A area do traingulo eh: %.2f", area);

    return 0;
}