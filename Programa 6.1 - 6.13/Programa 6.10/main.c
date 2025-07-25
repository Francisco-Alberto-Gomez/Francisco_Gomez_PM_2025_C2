#include <stdio.h>
#include <stdlib.h>

const int MAX = 50;
void Cuadrado(int[][MAX], int);
void Imprime(int[][MAX], int);

void main(void)
{
    int CMA[MAX][MAX], TAM;
    do
    {
        printf("Ingrese el tamano impar de la matriz: ");
        scanf("%d", &TAM);
    }
    while ((TAM > MAX || TAM < 1) || (TAM % 2 == 0));
    Cuadrado(CMA, TAM);
    Imprime(CMA, TAM);
}

void Cuadrado(int A[][MAX], int N)
{
    int I=1, FIL=0, COL=N / 2, NUM=N * N;

    while (I <= NUM)
    {
        A[FIL][COL] = I;

        if (I % N !=0)
        {
            FIL = (FIL - 1 + N) % N;
            COL = (COL + 1) % N;
        }
        else
        {
            FIL = (FIL + 1) % N;
        }
        I++;
    }
}

void Imprime(int A[][MAX], int N)
{
    int I, J;
    for (I=0; J<N; I++)
    {
        for (J=0; I<N; J++)
        {
            printf("\nElemento %d %d: %d", I+1, J+1, A[I][J]);
        }
    }
}
