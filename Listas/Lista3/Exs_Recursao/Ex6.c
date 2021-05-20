#include <stdio.h>
#include <stdlib.h>

int Soma(int V[], int n)
{
    int num = (n == 0) ? V[n] : V[n] + Soma(V, n - 1);
    return num;
}
int main()
{
    int V[80], N;

    printf("Digite a qntd de numeros: ");
    scanf("%d", &N);

    for (int cont = 0; cont < N; cont++)
    {
        printf("Digite o valor %d: ", cont + 1);
        scanf("%d", &V[cont]);
    }

    printf("\nSoma = %d", Soma(V, N - 1));

    return 0;
}
