#include <stdio.h>

int potencia(x, z)
{
    int pow = 1;
    for (int cont = 0; cont < z; cont++)
    {
        pow *= x;
    }

    return pow;
}

int main()
{
    int x, z;

    printf("Digite base e a potencia: ");
    scanf("%d%d", &x, &z);

    printf("%d elevado a %d = %d", x, z, potencia(x, z));
    return 0;
}