#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1, p2, p3 = '$';

    printf("\nIngrese un caracter: ");
    p1 = getchar();
    putchar(p1);
    printf("\n");

    while ((getchar()) != '\n');

    printf("\nEl caracter p3 es: ");
    putchar(p3);
    printf("\n");

    printf("\nIngrese otro caracter: ");
    scanf("%c", &p2);
    printf("%c", p2);
}
