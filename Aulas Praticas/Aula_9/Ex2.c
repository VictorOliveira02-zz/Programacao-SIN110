#include <stdio.h>
#include <string.h>

typedef struct sEndereco
{
    char nome[20];
    int numero;
    char cidade[20];
    char estado[3];
    int CEP;
} Endereco;

int main()
{
    Endereco end;

    printf("Nome da Rua: ");
    gets(end.nome);

    printf("Numero da residencia: ");
    fflush(stdin);
    scanf("%d", &end.numero);

    printf("Cidade: ");
    fflush(stdin);
    gets(end.cidade);

    printf("Estado: ");
    fflush(stdin);
    scanf("%s", &end.estado);

    printf("CEP: ");
    fflush(stdin);
    scanf("%d", &end.CEP);

    printf("%s %d %s %s %.8d ", end.nome, end.numero, end.cidade, end.estado, end.CEP);

    return 0;
}