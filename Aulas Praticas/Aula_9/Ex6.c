#include <stdio.h>
#include <string.h>

typedef struct sEndereco
{
    char rua[20];
    char bairro[20];
    char cidade[20];
    char estado[3];
    int CEP;
} Endereco;

typedef struct sCadastro
{
    char nome[20];
    int RG;
    int telefone;
    Endereco end;
    int CPF;
    int idade;
    float salario;
    char estado_civil[20];
    char sexo[10]
} Cadastro;

int main()
{
    Cadastro usuario[7];
    int maiorIdade = 0;
    char maisVelho[20], homens[7], salarioMil[7];

    for (int cont = 0; cont < 7; cont++)
    {
        printf("\n\nDigite o nome do usuario: ");
        gets(usuario[cont].nome);

        printf("Digite o RG: ");
        fflush(stdin);
        scanf("%d", &usuario[cont].RG);

        printf("Digite o telefone: ");
        scanf("%d", &usuario[cont].telefone);

        printf("Digite a Rua: ");
        fflush(stdin);
        gets(usuario[cont].end.rua);

        printf("Digite o Bairro: ");
        gets(usuario[cont].end.bairro);

        printf("Digite a Cidade: ");
        gets(usuario[cont].end.cidade);

        printf("Digite o Estado: ");
        gets(usuario[cont].end.estado);

        printf("Digite o CEP: ");
        fflush(stdin);
        scanf("%d", &usuario[cont].end.CEP);

        printf("Digite a CPF: ");
        scanf("%d", &usuario[cont].CPF);

        printf("Digite a idade: ");
        scanf("%d", &usuario[cont].idade);

        printf("Digite o salario: ");
        scanf("%f", &usuario[cont].salario);

        printf("Digite o Estado Civil: ");
        fflush(stdin);
        gets(usuario[cont].estado_civil);

        printf("Digite o sexo: ");
        gets(usuario[cont].sexo);

        if (usuario[cont].idade > maiorIdade)
        {
            maiorIdade = usuario[cont].idade;
            strcpy(maisVelho, usuario[cont].nome);
            strcat(maisVelho, maisVelho);
        }

        if (usuario[cont].sexo == "masculino")
        {
            homens[cont] = usuario[cont].nome;
        }

        if (usuario[cont].salario > 1000)
        {
            salarioMil[cont] = usuario[cont].nome;
        }
    }

    printf("\nMais velho: %s", maisVelho);
    printf("\nHomens:");
    for (int cont = 0; cont < strlen(homens); cont++)
    {
        printf("%s", homens[cont]);
    }

    printf("\nSalarios > 1000:");
    for (int cont = 0; cont < strlen(salarioMil); cont++)
    {
        printf("%s", salarioMil[cont]);
    }

    return 0;
}