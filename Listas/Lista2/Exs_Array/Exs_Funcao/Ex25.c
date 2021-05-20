#include <stdio.h>
#include <stdlib.h>

void Ordena(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2)
        if (*n2 > *n3)
            printf("%d - %d - %d", *n3, *n2, *n1);
        else if (*n1 > *n3)
            printf("%d - %d - %d", *n2, *n3, *n1);
        else
            printf("%d - %d - %d", *n3, *n1, *n2);

    else if (*n2 > *n3)
        if (*n1 > *n3)
            printf("%d - %d - %d", *n2, *n1, *n3);
        else
            printf("%d - %d - %d", *n2, *n3, *n1);
    else
        printf("%d - %d - %d", *n3, *n2, *n1);
}

int main()
{
    int n1, n2, n3;

    printf("Digite tres valores:");
    scanf("%d%d%d", &n1, &n2, &n3);

    Ordena(&n1, &n2, &n3);

    return 0;
}