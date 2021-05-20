#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sCondominio
{
    char nome_morador[50];
    int numeroAP;
    float area;
    int qntd_Moradores;
    float mensalidade;
} Condominio;

void Cadastro(Condominio *apartamentos)
{
    printf("CADASTRANDO APS...");
    for (int cont = 0; cont < 15; cont++)
    {
        printf("\n\nDigite o nome do morador %d: ", cont + 1);
        getchar();
        gets(apartamentos[cont].nome_morador);

        printf("Digite o numeor do AP: ");
        getchar();
        scanf("%d", &apartamentos[cont].numeroAP);

        printf("Digite a area (m^2): ");
        scanf("%f", &apartamentos[cont].area);

        printf("Digite a qnt de moradores: ");
        scanf("%d", &apartamentos[cont].qntd_Moradores);

        printf("Digite o valor da mensalidade: ");
        getchar();
        scanf("%f", &apartamentos[cont].mensalidade);
    }
}

void SomaArea(Condominio *apartamentos)
{
    float soma = 0;
    for (int cont = 0; cont < 15; cont++)
    {
        soma += apartamentos[cont].area;
    }

    printf("Area total do Condominio = %.2f", soma);
}

void SomaMensal(Condominio *apartamentos)
{
    float soma = 0;
    for (int cont = 0; cont < 15; cont++)
    {
        soma += apartamentos[cont].mensalidade;
    }

    printf("Valor total arrecadado por mes = %.2f", soma);
}

void Maior(Condominio *apartamentos)
{
    float maior = 0;
    char morador[50];
    for (int cont = 0; cont < 15; cont++)
    {
        if (maior > apartamentos[cont].qntd_Moradores)
        {
            strcpy(morador, apartamentos[cont].nome_morador);
        }
    }

    int aux;

    aux = -1;

    for (int cont = 0; cont <= 15; cont++)
    {

        if (strcmp(morador, apartamentos[cont].nome_morador) == 0)
        {
            aux = cont;
            break;
        }
    }

    if (aux >= 0)
    {
        printf("\nnome do morador: %s", apartamentos[aux].nome_morador);
        printf("\nnumeor do AP: %d", &apartamentos[aux].numeroAP);
        printf("\narea (m^2): %.2f", &apartamentos[aux].area);
        printf("\nqnt de moradores: %d", &apartamentos[aux].qntd_Moradores);
        printf("\nvalor da mensalidade: %f", &apartamentos[aux].mensalidade);
    }
}

int main()
{
    Condominio apartamentos[15];

    Cadastro(apartamentos);
    SomaArea(apartamentos);
    SomaMensal(apartamentos);
    Maior(apartamentos);

    return 0;
}