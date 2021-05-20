//EXERCICIO 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, *v, X;
    int conta = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    v = (int *)malloc(N * sizeof(int));

    printf("\nDigite UM VALOR X: ");
    scanf("%d", &X);

    for (int cont = 0; cont < N; cont++)
    {
        printf("Digite o %d valor do vetor: ", cont + 1);
        getchar();
        scanf("%d", &v[cont]);
    }

    printf("\nMultiplos de %d: ", X);
    for (int cont = 0; cont < N; cont++)
    {
        if (v[cont] % X == 0)
        {
            conta++;
            printf("%d, ", v[cont]);
        }
    }
    printf("\nTotal de Multiplos: %d", conta);

    free(v);
    return 0;
}