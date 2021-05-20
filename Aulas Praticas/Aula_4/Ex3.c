#include <stdio.h>

int main()
{
    float num1, num2;
    int opcao;

    printf("Digite 2 numeros: ");
    scanf("%f%f", &num1, &num2);

    printf("POR FAVOR,ESCOLHA APENAS UMA DAS OPCOES ABAIXO.\n");
    printf("[ 1 ] - SOMA.\n");
    printf("[ 2 ] - SUBTRACAO.\n");
    printf("[ 3 ] - DIVISAO.\n");
    printf("[ 4 ] - MULTIPLICACAO.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("%0.2f", num1 + num2);
        break;
    case 2:
        printf("%0.2f", num1 - num2);
        break;
    case 3:
        printf("%0.2f", num1 / num2);
        break;
    case 4:
        printf("%0.2f", num1 * num2);
        break;
    }

    
    return 0;
}