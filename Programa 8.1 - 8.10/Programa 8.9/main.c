#include <stdio.h>
#include <string.h>

typedef struct
{
    char zona[20];
    char calle[20];
    char colo[20];
} ubicacion;

typedef struct
{
    char clave[6];
    float scu;
    float ste;
    char car[50];
    ubicacion ubi;
    float precio;
    char dispo;
} propiedades;

void Lectura(propiedades[], int);
void F1(propiedades[], int);
void F2(propiedades[], int);

int main(void)
{
    propiedades PROPIE[100];
    int TAM;

    do
    {
        printf("Ingrese el numero de propiedades (1-100): ");
        scanf("%d", &TAM);
    }
    while (TAM < 1 || TAM > 100);

    Lectura(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);

    return 0;
}

void Lectura(propiedades A[], int T)
{
    int i;
    for(i=0; i<T; i++)
    {
        printf("\nPropiedad %d:\n", i+1);

        fflush(stdin);
        printf("Clave: ");
        gets(A[i].clave);

        printf("Superficie cubierta: ");
        scanf("%f", &A[i].scu);

        printf("Superficie terreno: ");
        scanf("%f", &A[i].ste);

        fflush(stdin);
        printf("Caracteristicas: ");
        gets(A[i].car);

        printf("Zona: ");
        gets(A[i].ubi.zona);

        printf("Calle: ");
        gets(A[i].ubi.calle);

        printf("Colonia: ");
        gets(A[i].ubi.colo);

        printf("Precio: ");
        scanf("%f", &A[i].precio);

        fflush(stdin);
        printf("Disponibilidad (V para venta, R para renta): ");
        scanf("%c", &A[i].dispo);
    }
}

void F1(propiedades A[], int T)
{
    int i;
    printf("\nListado de propiedades para Venta en miraflores (450k - 650k):\n");
    for (i=0; i<T; i++)
    {
        if ((A[i].dispo == 'V' || A[i].dispo == 'v') && strcmp(A[i].ubi.zona, "Miraflores") == 0 && A[i].precio >= 450000 && A[i].precio <= 650000)
        {
            printf("\nClave: %s\n", A[i].clave);
            printf("Superficie cubierta: %.2f\n", A[i].scu);
            printf("Superficie terreno: %.2f\n", A[i].ste);
            printf("Caracteristicas: %s\n", A[i].car);
            printf("Calle: %s\n", A[i].ubi.calle);
            printf("Colonia: %s\n", A[i].ubi.colo);
            printf("Precio: %.2f\n", A[i].precio);
        }
    }
}

void F2(propiedades A[], int T)
{
    int i;
    float li, ls;
    char zon[20];

    fflush(stdin);
    printf("\nListado de propiedades para renta por zona y precio:\n");
    printf("Ingrese zona geografica: ");
    gets(zon);

    printf("ingrese el limite inferior del precio: ");
    scanf("%f", &li);

    printf("Ingrese el limite superior del precio: ");
    scanf("%f", &ls);

    for (i=0; i<T; i++)
    {
        if ((A[i].dispo == 'R' || A[i].dispo == 'r') && strcmp(A[i].ubi.zona, zon) == 0 && A[i].precio >= li && A[i].precio <= ls)
        {
            printf("\nClave: %s\n", A[i].clave);
            printf("Superficie cubierta: %.2f\n", A[i].scu);
            printf("Superficie terreno: %.2f\n", A[i].ste);
            printf("Caracteristicas: %s\n", A[i].car);
            printf("Calle: %s\n", A[i].ubi.calle);
            printf("Colonia %s\n", A[i].ubi.colo);
            printf("Precio: %.2f\n", A[i].precio);
        }
    }
}
