/* Cwiczenie_4.c - Napisz funkcje, ktora zwraca index najwiekszej wartosci przechowywanej w tablicy. Przetestuj ja w prostym programie.*/

#include <stdio.h>

int find_max_index(int tab[], int rozmiar);

void main(void)
{
    // initializacja tabeli
    int tab[5] = {1,7,0,5,3};
    int index;

    // wysietlenie wyniku obliczen
    index = find_max_index(tab, 5);
    printf("Najwieksza wartosc w tabeli: %d i jej index: %d\n", tab[index], index);
}

int find_max_index(int tab[], int rozmiar)
{
    // initializacja zmiennych
    int max, i, k;
    k = 0;
    max = tab[k];

    // wyznaczenie wartosci maksymalnej
    for (i=0; i < rozmiar; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
            k = i;
        }
    }
    return k;
}
