// EXERCICIO 4

#include <stdio.h>

int main()
{

    float nota_1 = 7.0, nota_2 = 7.5, nota_3 = 8.5;
    float media_ponderada, soma_nota, soma_peso;
    int peso_1 = 1, peso_2 = 2, peso_3 = 3;

    soma_nota = (nota_1 * peso_1) + (nota_2 * peso_2) + (nota_3 * peso_3);
    soma_peso = peso_1 + peso_2 + peso_3;

    media_ponderada = soma_nota / soma_peso;

    printf("Media Ponderada: %0.2f", media_ponderada);
    printf("\n%f %f", soma_nota, soma_peso);

    return 0;
}