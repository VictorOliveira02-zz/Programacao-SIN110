// Exercicio 3

#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, IMC;

    printf("Digite sua peso (Kg): ");
    scanf("%f", &peso);
    printf("Digite sua Altura (M): ");
    scanf("%f", &altura);

    IMC = peso / (pow(altura, 2));

    printf("IMC: %0.2f\n", IMC);

    if (IMC < 16)
    {
        printf("Magreza Grave.\n");
    }
    else if (IMC >= 16 && IMC < 17)
    {
        printf("Magreza Moderada.\n");
    }
    else if (IMC >= 17 && IMC < 18.5)
    {
        printf("Magradeza Leve.\n");
    }
    else if (IMC >= 18.5 && IMC < 25)
    {
        printf("Saudavel.\n");
    }
    else if (IMC >= 25 && IMC < 30)
    {
        printf("Sobrepeso.\n");
    }
    else if (IMC >= 30 && IMC < 35)
    {
        printf("Obesidade Grau I.\n");
    }
    else if (IMC >= 35 && IMC < 40)
    {
        printf("Obesidade Grau II (Severa).\n");
    }
    else if (IMC >= 40)
    {
        printf("Obesidade Grau III (Morbida).\n");
    }

    return 0;
}