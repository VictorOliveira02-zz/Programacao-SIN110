//EXERCICIO 4

#include <stdio.h>
#include <string.h>

typedef struct sProduto
{
    char nome[20];
    float preco;
    float desconto;
    char disponivel;
} Produto;

int main()
{
    Produto mercadoria[100];
    int n;
    float caro = 0, barato = 9999, maiorD = 0, preco_final, preco_final_B = 9999;
    char Pcaro[20], Pbarato[20], Mdesconto[20], MDdesconto[20], Dpreco_final[20];

    printf("Quantos produtos deseja cadastrar ?: ");
    scanf("%d", &n);

    for (int cont = 0; cont < n; cont++)
    {
        printf("\nDigite o preco do produto: ");
        scanf("%f", &mercadoria[cont].preco);
        if (mercadoria[cont].preco < 0)
        {
            break;
        }

        printf("Digite o nome do produto: ");
        fflush(stdin);
        scanf("%s", &mercadoria[cont].nome);

        printf("Digite o desconto do produto: ");
        fflush(stdin);
        scanf("%f", &mercadoria[cont].desconto);

        printf("Digite a disponibilidade do produto [S/N]: ");
        fflush(stdin);
        scanf("%c", &mercadoria[cont].disponivel);

        if (mercadoria[cont].preco > caro)
        {
            strcpy(Pcaro, mercadoria[cont].nome);
        }

        if (mercadoria[cont].preco < barato)
        {
            strcpy(Pbarato, mercadoria[cont].nome);
        }

        if (mercadoria[cont].desconto > maiorD)
        {
            strcpy(Mdesconto, mercadoria[cont].nome);
        }

        if (mercadoria[cont].disponivel == "S" && mercadoria[cont].preco > maiorD)
        {
            strcpy(MDdesconto, mercadoria[cont].nome);
        }

        preco_final = ((mercadoria[cont].desconto / 100) * mercadoria[cont].preco) - mercadoria[cont].preco;
        if (mercadoria[cont].disponivel == "S" && preco_final < preco_final_B)
        {
            strcpy(Dpreco_final, mercadoria[cont].nome);
        }
    }

    printf("\nMais Caro: %s\nMais Barato: %s", Pcaro, Pbarato);
    printf("\nMaior Desconto: %s", Mdesconto);
    printf("\nDisponivel e Maior Desconto: %s", MDdesconto);
    printf("\nDisponivel e Menor Preco Final: %s", Dpreco_final);

    return 0;
}