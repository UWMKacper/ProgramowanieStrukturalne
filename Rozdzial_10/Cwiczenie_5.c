/* Cwiczenie_5.c - Napisz funkcje, ktora zwraca roznice miedzy najwiekszym i najmniejszym elementem w tablicy. Przetestuj j¹ w prostym programie.*/

#include <stdio.h>

int find_diff(int tab[], int rozmiar);

void main(void)
{
    // initializacja tabeli
    int tab[5] = {3,7,3,5,3};
    int index;

    // wysietlenie wyniku obliczen
    printf("Roznica miedzy najwieksza i najmniejsza wartoscia wynosi: %d.\n", find_diff(tab, 5));
}

int find_diff(int tab[], int rozmiar)
{
    // initializacja zmiennych
    int max, min, i;
    max = tab[0];
    min = tab[0];

    // wyznaczenie wartosci maksymalnej
    for (i=0; i < rozmiar; i++)
    {
        if (tab[i] > max)
            max = tab[i];
        if (tab[i] < min)
            min = tab[i];
    }

    return max-min;
}
