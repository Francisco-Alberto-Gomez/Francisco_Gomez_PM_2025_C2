#include <stdio.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nombre[30];
    float cal[5];
} alumno;

void Lectura(alumno A[], int T);
void F1(alumno A[], int T);
void F2(alumno A[], int T);
void F3(alumno A[], int T);

void main(void)
{
    alumno ARRE[50];
    int TAM;
    do
    {
        printf("Ingrese el tamanio del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>50 || TAM<1);

    Lectura(ARRE, TAM);
    F1(ARRE, TAM);
    F2(ARRE, TAM);
    F3(ARRE, TAM);
}

void Lectura(alumno A[], int T)
{
    int I, J;
    for (I=0; I<T; I++)
    {
        printf("\nIngrese los datos del alumno %d\n", I+1);
        printf("Ingrese la matricula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nombre);

        for (J=0; J<5; J++)
        {
            printf("\tIngrese la calificacion %d del alumno %d: ", J+1, I+1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

void F1(alumno A[], int T)
{
    int I, J;
    float SUM, PRO;

    printf("\n--- Matriculas y Promedios ---\n");
    for (I=0; I<T; I++)
    {
        printf("Matricula del alumno %d", A[I].matricula);
        SUM = 0.0;
        for (J=0; J<5; J++)
        {
            SUM += A[I].cal[J];
        }
        PRO = SUM / 5.0;
        printf("\t\tPromedio: %.2f\n", PRO);
    }
}

void F2(alumno A[], int T)
{
    int I;
    printf("\n--- Alumnos con calificacion en la tercera materia > 9 ---\n");
    for (I = 0; I < T; I++)
    {
        if (A[I].cal[2] > 9)
        {
            printf("Matricula del alumno: %d\n", A[I].matricula);
        }
    }
}

void F3(alumno A[], int T)
{
    int I;
    float PRO, SUM = 0.0;

    for (I=0; I<T; I++)
    {
        SUM += A[I].cal[3];
    }
    PRO = SUM / T;

    printf("\nPromedio de la materia 4: %.2f\n", PRO);
}
