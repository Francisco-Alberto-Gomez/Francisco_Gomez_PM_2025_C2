#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int i;
    double d;
    long l;
    char cad0[100], *cad1;

    printf("\nIngrese una cadena de caracteres (entero): ");
    gets(cad0);
    i = atoi(cad0);
    printf("\n%s \t %d\n", cad0, i + 3);

    printf("Ingrese una cadena de caracteres (double): ");
    gets(cad0);
    d = atof(cad0);
    printf("\n%s \t %.21\n", cad0, d + 1.50);
    printf("Resto de cadena: %s\n", cad1);

    d = atol(cad0);
    printf("\n%s \t %ld\n", cad0, l + 10);

    l = strtol(cad0, &cad1, 0);
    printf("\n%s \t %ld\n", cad0, l + 10);
    puts(cad1);
}
