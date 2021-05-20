#include <stdio.h>
#include <stdlib.h>

typedef struct sPlanetas
{
    char nome[50];
    float distSol;
    float tempMin;
    float tempMax;
} Planetas;

int main()
{
    Planetas planeta[4];
    FILE *arquivo;

    arquivo = fopen("planetas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Error");
        exit(1);
    }

    for (int cont = 0; cont < 4; cont++)
    {
        fscanf(arquivo, "%s %f %f %f\n", planeta[cont].nome, &planeta[cont].distSol, &planeta[cont].tempMin, &planeta[cont].tempMax);

        printf("%s - %.2f - %.2f - %.2f\n", planeta[cont].nome, planeta[cont].distSol, planeta[cont].tempMin, planeta[cont].tempMax);
    }
    

    fclose(arquivo);

    return (0);
}