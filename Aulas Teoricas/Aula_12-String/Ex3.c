//EXERCICIO 3

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50], caractere;
    int qnt_vog = 0;

    printf("Digite seu nome:");
    gets(nome);
    printf("Digite um caractere:");
    fflush(stdin);
    scanf("%c", &caractere);

    for (int cont = 0; cont < strlen(nome); cont++)
    {
        if (nome[cont] == 'a' || nome[cont] == 'e' || nome[cont] == 'i' || nome[cont] == 'o' || nome[cont] == 'u')
        {
            qnt_vog++;
            nome[cont] = caractere;
        }
    }

    printf("Possui: %d vogais\n", qnt_vog);
    puts(nome);

    return 0;
}