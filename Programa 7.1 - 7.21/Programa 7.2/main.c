#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char p1;

    printf("\nIngrese un caracter para analizar si este es un digito: ");
    p1 = getchar();
    if(isdigit(p1))
        printf("%c es un digito \n", p1);
    else
        printf("%c no es un digito \n", p1);

    while(getchar() != '\n');

    printf("\nIngrese un caracter para examinar si este es una letra: ");
    p1 = getchar();
    if(isalpha(p1))
        printf("%c es una letra \n", p1);
    else
        printf("%c no es una letra \n", p1);

    while(getchar() != '\n');

    printf("\nIngrese un caracter para examinar si este es una letra minuscula: ");
    p1 = getchar();
    if(isalpha(p1))
    {
        if(islower(p1))
            printf("%c es una letra minuscula \n", p1);
        else
            printf("%c no es una letra minuscula \n", p1);
    }
    else
        printf("%c no es una letra \n", p1);

    while(getchar() != '\n');

    printf("\nIngrese una letra para convertirla de mayuscula a minuscula: ");
    p1 = getchar();
    if(isalpha(p1))
    {
        if(isupper(p1))
            printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1));
        else
            printf("%c es una letra minuscula \n", p1);
    }
    else
        printf("%c no es una letra \n", p1);
}
