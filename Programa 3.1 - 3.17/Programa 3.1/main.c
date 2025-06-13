#include <stdio.h>
#include <stdlib.h>
/* Nómina.
 El programa, al recibir los salarios de 15 profesores, obtiene el total de la
 nómina de la universidad.

 I: variable de tipo entero.
 SAL y NOM: variables de tipo real. */

void main(void)
{
    int I;
    float SAL, NOM;
    NOM = 0;
    for (I=1; I<=15; I++)
    {
        printf("\nIngrese El Salario Del Profesor %d:\t", I);
        scanf("%f", &SAL);
        NOM = NOM + SAL;
    }
    /*Imprimir el pago de los profesores
    por cada uno menos el impuesto de 20%
    imprimir el total a los profesores sin el impuesto
    imprimir el total de impuesto*/

    printf("\nEl Total De La Nomina Es: %2f", NOM);
}
