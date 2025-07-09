#include <stdio.h>
#include <stdlib.h>
/* Conflicto de variables con el mismo nombre. */

void f1(void);
int K = 5;

void main (void)
{
    int I;
    for (I = 1; I <= 3; I++)
        f1();
}
void f1(void)
{
    int K = 2;
    K += K;
    printf("\n\nEl Valor De La Variable Local Es: %d", K);
    ::K = ::K + K;
    printf("\nEl Valor De La Variable Global Es: %d", ::K);
}
