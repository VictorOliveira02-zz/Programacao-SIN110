// Exercicio 6

#include <stdio.h>

int main()
{

    float nota1 = 20, nota2 = 20, nota3 = 25, nota_final, porcentagem_faltas;
    float aulas_dadas = 60, faltas = 17;

    nota_final = nota1 + nota2 + nota3;
    porcentagem_faltas = faltas / aulas_dadas * 100;

    if (nota_final >= 60 && porcentagem_faltas < 25)
    {
        printf("Nota final: %0.2f\nPorcentagem de Faltas: %0.2f%%\nAluno Aprovado!", nota_final, porcentagem_faltas);
    }
    else
    {
        printf("Nota final: %0.2f\nPorcentagem de Faltas: %0.2f%%\nAluno Reprovado!", nota_final, porcentagem_faltas);
    }

    return 0;
}