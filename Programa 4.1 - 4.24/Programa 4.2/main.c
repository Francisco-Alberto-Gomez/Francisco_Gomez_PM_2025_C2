#include <stdio.h>
#include <stdlib.h>
/* Cubo-2.
El programa calcula el cubo de los 10 primeros n�meros naturales con la
ayuda de una funci�n. */

int cubo(void);
int I;

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();
        printf("\nEl Cubo De %d es: %d", I, CUB);
    }
}

int cubo(void)
{
    int I = 2;
    return (I*I*I);
}
