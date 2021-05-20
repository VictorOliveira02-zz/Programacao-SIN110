#include <stdio.h>

int main()
{

    float nota = 1.5;
    int matricula = 3221;

    if (nota >= 9)
    {
        printf("%d\nConceito A", matricula);
    }
    else if (nota >= 8 && nota < 9)
    {
        printf("%d\nConceito B", matricula);
    }
    else if (nota >= 6 && nota < 8)
    {
        printf("%d\nConceito C", matricula);
    }
    else if (nota >= 3 && nota < 6)
    {
        printf("%d\nConceito D", matricula);
    }
    else if (nota < 3)
    {
        printf("%d\nConceito E", matricula);
    }

    return 0;
}