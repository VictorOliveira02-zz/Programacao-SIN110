//EXERCICIO 1

#include <stdio.h>
#include <math.h>

float DistanciaEuclidiana(x1, x2, y1, y2)
{
    float P1 = pow(x2 - x1, 2);
    float P2 = pow(y2 - y1, 2);

    float Dist = sqrt((P1) + (P2));

    return Dist;
}

int main()
{
    float x1, x2;
    float y1, y2;

    printf("Digite as coordenadas do PONTO 1(x1, y1): ");
    scanf("%f%f", &x1, &y1);

    printf("Digite as coordenadas do PONTO 2(x2, y2): ");
    fflush(stdin);
    scanf("%f%f", &x2, &y2);

    printf("\nDistancia Euclidiana: %.2f", DistanciaEuclidiana(x1, x2, y1, y2));

    return 0;
}