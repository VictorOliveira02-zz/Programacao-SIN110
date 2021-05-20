#include <stdio.h>
#include <string.h>

typedef struct sData
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct sEndereco
{
    char rua[20];
    int numero;
    char bairro[20];
    char estado[3];
    int CEP;
} Endereco;

typedef struct sPessoa
{
    char nome[20];
    int peso;
    char sexo[10];
    Data date;
    Endereco address;
} Pessoa;

int main()
{
    Pessoa person;

    printf("Nome: ");
    gets(person.nome);

    printf("Peso: ");
    scanf("%d", &person.peso);

    printf("Sexo: ");
    fflush(stdin);
    gets(person.sexo);

    printf("Dia Nascimento: ");
    scanf("%d", &person.date.dia);

    printf("Mes Nascimento: ");
    scanf("%d", &person.date.mes);

    printf("Ano Nascimento: ");
    scanf("%d", &person.date.ano);

    printf("Rua: ");
    fflush(stdin);
    gets(person.address.rua);

    printf("Numero da residencia: ");
    fflush(stdin);
    scanf("%d", &person.address.numero);

    printf("Bairro: ");
    fflush(stdin);
    gets(person.address.bairro);

    printf("Estado: ");
    scanf("%s", &person.address.estado);

    printf("CEP: ");
    scanf("%d", &person.address.CEP);

    printf("Nome: %s", person.nome);
    printf("\nSexo: %s", person.sexo);
    printf("\nPeso: %d", person.peso);
    printf("\nData de Nasc: %d/%d/%d", person.date.dia, person.date.mes, person.date.ano);
    printf("\n%s %d %s %s %.8d ", person.address.rua, person.address.numero, person.address.bairro, person.address.estado, person.address.CEP);

    return 0;
}