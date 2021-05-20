#include <stdio.h>
#include <stdlib.h>

char ImprimeVog(int cont, char *vogal)
{
    char v = (vogal[cont] == '\0') ? 1 : ImprimeVog(cont + 1, vogal);
    printf("%c -> ", vogal[cont]);
    return v;
}

int main()
{
    char vogal[] = {"AEIOU"};

    ImprimeVog(0, vogal);
    printf("FIM!");

    return 0;
}