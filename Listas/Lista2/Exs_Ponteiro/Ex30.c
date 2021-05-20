#include <stdio.h>
#include <stdlib.h>

int main() /* e s s e programa e s t a e r r a d o */
{
    int x, *p;
    x = 10;
    p = &x;
    printf("p = %d ", *p);
    return 0;

    // O programa estava incorreto pelo fato de que o p recebia o valor da variavel x e não seu endereço.
    // Ao passar o endereço de memoria de x para p, p passa a valer 10.
}
