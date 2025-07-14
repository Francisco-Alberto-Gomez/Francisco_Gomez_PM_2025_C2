#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum= 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)");
    c = getchar();
    while (c == 'S' || c == 's')
    {
        printf("\nIngrese la cadena de caracteres: ");
        getchar();
        fgets(cad, sizeof(cad), stdin);
        cad[strcspn(cad, "\n")] = '\0';

        sum += atof(cad);
        i++;

        printf("\nDesea ingresar otra cadena de caracteres (S/N)?");
        c = getchar();
    }
    printf("\nSuma: %.2f", sum);
    printf("\nPromedio: %.2\n", sum / i);
}
