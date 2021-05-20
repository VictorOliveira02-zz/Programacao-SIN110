// EXERCICIO 8 - ESTRUTURAS DE SELEÇÃO

#include <stdio.h>

int main()
{
    float h, peso_ideal;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &h);

    printf("\nDigite o Sexo [M]/[F]: ");
    scanf(" %c", &sexo);

    if (sexo == 'M')
    {
        peso_ideal = 72.7 * h - 58;
        printf("SEXO: MASCULINO\nPESO IDEAL: %.2f Kg", peso_ideal);
    }
    else
    {
        peso_ideal = 62.1 * h - 44.7;
        printf("SEXO: FEMININO\nPESO IDEAL: %.2f Kg", peso_ideal);
    }
    return 0;
}