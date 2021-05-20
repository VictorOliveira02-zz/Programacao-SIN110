//EXERCICIO 8

#include <stdio.h>
#include <string.h>

int main()
{
    char produto[5][100];
    float valor[5];
    int cont, maior = 0, menor = 0;
    for (cont = 0; cont < 5; ++cont)
    {
        printf("Codigo do Produto %d\n", cont + 1);
        printf("Produto: ");
        scanf("%s", &produto[cont]);
        printf("Preco: ");
        scanf("%f", &valor[cont]);

        if (valor[cont] > valor[maior])
        {
            maior = cont;
        }
        if (valor[cont] < valor[menor])
        {
            menor = cont;
        }
    }

    printf("\nProduto mais CARO: %s - R$ %0.2f\n", produto[maior], valor[maior]);
    printf("Produto mais BARATO: %s - R$ %0.2f", produto[menor], valor[menor]);
    return 0;
}
