/*Cwiczenie_9.c - Napisz program, ktory deklaruje tablice wartosci typu int o wymiarach 3 na 5
i przypisuje jej jakies wartosci poczatkowe, a nastepnie wyswietla wartosci, podwaja
je i wyswietla nowe wartosci. Wyswietlaniem i podwajaniem powinny zajmowac
sie osobne funkcje, pobierajace jako argumenty nazwe tablicy oraz liczbe rzedow.*/

#include <stdio.h>
#include <math.h>

void wyswietl(int tabela[][5], int wiersz);
void podwoj(int tabela[][5], int wiersz);

void main(void)
{
    // Definiowanie zmiennych
    int zrodlo[3][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}};
    int cel[3][5];

    wyswietl(zrodlo, 3);
    podwoj(zrodlo, 3);
    wyswietl(zrodlo, 3);
}

void wyswietl(int tabela[][5], int wiersz)
{
    int i,k;

    for (i = 0; i < wiersz; i++)
    {
        for (k = 0; k < 5; k++)
        {
            printf("%d ", tabela[i][k]);
        }
        printf("\n");
    }
}

void podwoj(int tabela[][5], int wiersz)
{
    int i,k;

    for (i = 0; i < wiersz; i++)
    {
        for (k = 0; k < 5; k++)
        {
            tabela[i][k] *= 2;
        }
    }
}
