#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[20];

    printf("Digite um nome: ");
    gets(nome);

    if(nome[0] == 'A' || nome[0] == 'a'){
        printf("%s", nome);
    }

    return 0;
}