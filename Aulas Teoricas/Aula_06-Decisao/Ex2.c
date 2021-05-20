// Exercicio 2

#include <stdio.h>

int main()

{

    float peso_ideal, h;
    char sexo;

    printf("Digite sua altura (m):");
    scanf("%f", &h);

    printf("Digite seu sexo [f]/[m]:");
    scanf("%s", &sexo);

    if (sexo == 'm')
    {
        peso_ideal = ((72.7 * h) - 58);
    }

    else if (sexo == 'f')
    {

        peso_ideal = ((62.1 * h) - 44.7);
    }
    
    printf("O seu peso ideal eh:%0.2f Kg ", peso_ideal);
    return 0;
}