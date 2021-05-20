#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sEletro
{
    char geladeira[15];
    char microondas[15];
    char TV[15];
    char fogao[15];
    char maquina[15];
} Eletro;

typedef struct sPotencia
{
    // Potencia em KW
    float P_geladeira;
    float P_microondas;
    float P_TV;
    float P_fogao;
    float P_maquina;
} Potencia;

typedef struct sTempo
{
    // Tempo ativo em horas
    float T_geladeira;
    float T_microondas;
    float T_TV;
    float T_fogao;
    float T_maquina;
} Tempo;

int main()
{
    Eletro eletro;

    Potencia potencia;
    potencia.P_geladeira = 25;
    potencia.P_microondas = 20;
    potencia.P_TV = 15;
    potencia.P_fogao = 10;
    potencia.P_maquina = 5;

    Tempo tempo;
    tempo.T_geladeira = 25;
    tempo.T_microondas = 20;
    tempo.T_TV = 15;
    tempo.T_fogao = 10;
    tempo.T_maquina = 5;

    float t_dias;

    printf("Digite o tempo em dias de consumo: ");
    scanf("%f", &t_dias);

    printf("\nGeladeira = %.2f", potencia.P_geladeira * tempo.T_geladeira * t_dias);

    printf("\nMicroondas = %.2f", potencia.P_microondas * tempo.T_microondas * t_dias);

    printf("\nTV = %.2f", potencia.P_TV * tempo.T_TV * t_dias);

    printf("\nFogao = %.2f", potencia.P_fogao * tempo.T_fogao * t_dias);

    printf("\nMaquina = %.2f", potencia.P_maquina * tempo.T_maquina * t_dias);

    return 0;
}