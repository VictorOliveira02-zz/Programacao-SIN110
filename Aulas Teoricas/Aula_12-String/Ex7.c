//EXERCICIO 7

#include <stdio.h>
#include <string.h>

int main()
{
    char vetor[100][50];
    int N = 10, cont;

    for (cont = 0; cont < N; cont++)
    {
        printf("Digite a string numero %d: ", cont);
        gets(vetor[cont]);
        printf("String: %s\n", vetor[cont]);
        printf("Tamanho: %d\n\n", strlen(vetor[cont]));
    }
    return 0;
}