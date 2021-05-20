#include <stdio.h>

typedef struct sHora
{
    int hora;
    int minuto;
    int segundo;
} Hora;

int main()
{
    Hora H;

    printf("Digite a Hora: ");
    scanf("%d", &H.hora);

    printf("Digite o minuto: ");
    scanf("%d", &H.minuto);

    printf("Digite o segundo: ");
    scanf("%d", &H.segundo);

    printf("%d:%d:%.2d", H.hora, H.minuto, H.segundo);
    return 0;
}