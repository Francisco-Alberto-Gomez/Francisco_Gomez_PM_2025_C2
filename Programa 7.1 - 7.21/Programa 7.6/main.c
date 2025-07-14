#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad0[50] = "Hola Mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

    strcpy(cad1, cad0);
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "XX");
    printf("\nSe copian la cadena XX a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("\nSe copia 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nSe copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    printf("\nPrueba de la funcion strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad2);

    strcat(cad1, "YY");
    printf("\nSe incorpora 4 caracteres de cad0 a cad2: %s\n", cad2);

    char *ptr;
    ptr = strstr(cad0, "Mexico");
    printf("\nPrueba de la funcion strstr. Se trata de localizar la cadena Mexco dentro de cad0: %s\n", ptr);

    ptr = strstr(cad0, "Guatemala");
    printf("\nSe trata de localizar la cadena guatemala dentro de cad0: %s\n", ptr ? ptr : "No encontrada");
}
