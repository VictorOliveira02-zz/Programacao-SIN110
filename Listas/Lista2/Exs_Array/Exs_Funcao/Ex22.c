#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float MediaPon(float n1, float n2, float n3)
{
    float Media;

    Media = (5 * n1 + 3 * n2 + 2 * n3) / 10;
    return Media;
}

int main()
{
    float n1, n2, n3;

    printf("Digite as notas n1, n2 e n3: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    printf("Media Ponderada = %.2f", MediaPon(n1, n2, n3));

    return 0;
}