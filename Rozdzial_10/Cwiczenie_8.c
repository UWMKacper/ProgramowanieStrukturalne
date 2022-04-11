/*Cwiczenie_8.c - Napisz funkcje, ktora przypisuje kazdemu elementowi tablicy sume wartosci odpowiednich
elementow w dwoch innych tablicach. (Jesli tablica nr 1 ma wartosci
2, 4, 5 i 8, a tablica nr 2 wartosci 1, 0, 4 i 6, funkcja przypisuje tablicy nr 3 wartosci
3, 4, 9 i 14). Funkcja powinna przyjmowac jako argumenty trzy nazwy tablic oraz
ich rozmiar. Wyprobuj funkcje w prostym programie.*/

#include <stdio.h>

void kopiuj_suma(int pierwszy[],int drugi[], int suma[], int rozmiar);

void main(void)
{
    // Definiowanie zmiennych
    int skladnik_1[4] = {2, 4, 5, 8};
    int skladnik_2[4] = {1, 0, 4, 6};
    int suma[4];
    int i, k;

    kopiuj_suma(skladnik_1, skladnik_2, suma, 4);

    for (i=0; i<4; i++)
    {
        printf("%d ", suma[i]);
    }
}

void kopiuj_suma(int pierwszy[],int drugi[], int suma[], int rozmiar)
{
    int i;

    for (i=0; i < rozmiar; i++)
    {
        suma[i] = pierwszy[i] + drugi[i];
    }
}
