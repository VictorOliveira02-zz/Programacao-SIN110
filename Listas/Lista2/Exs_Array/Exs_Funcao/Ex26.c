#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Dist(float x1, float y1, float x2, float y2)
{
    float dist;
    dist = sqrt((pow(x1 - x2, 2)) + (pow(y1 - y2, 2)));

    return dist;
}

int main()
{
    float x1, y1;
    float x2, y2;

    printf("Digite as coordenadas do P1 de x e y: ");
    scanf("%f%f", &x1, &y1);

    printf("Digite as coordenadas do P2 de x e y: ");
    scanf("%f%f", &x2, &y2);

    printf("Distancia Euclidiana = %.2f", Dist(x1, y1, x2, y2));

    return 0;
}