// EXERCICIO 9 - ESTRUTURAS DE REPETIÇÃO

#include <stdio.h>

int main()
{
    float altura;
    int idade, cont = 0;

    do
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0)
            break;

        printf("Digite a altura em metros: ");
        scanf(" %f", &altura);

        if (idade > 18 && altura > 1.6)
        {
            cont++;
        }

    } while (idade > 0);
    
    printf("%d tem mais de 18 anos e estatura superior a 1.60 metros ", cont);
    
    return 0;
}