#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);
    cad0 = "Brasil";
    puts(cad0);

    char *cad1;

    char *cad2 = "";

    char cad3[20] = "Mexico";
    puts(cad3);

    printf("Ingrese una cadena (max 19 caracteres): ");
    fgets(cad3, sizeof(cad3), stdin);
    puts(cad3);
}
