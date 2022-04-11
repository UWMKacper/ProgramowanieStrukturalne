/* Cwiczenie_3.c -3. Napisz funkcjê, która zwraca najwiêksz¹ wartoœæ przechowywan¹ w tablicy. Przetestuj
j¹ w prostym programie.*/

#include <stdio.h>

int find_max(int tab[], int rozmiar);

void main(void)
{
    // initializacja tabeli
    int tab[5] = {1,7,0,0,0};

    // wysietlenie wyniku obliczen
    printf("Najwieksza wartoscia w tabeli jest: %d\n", find_max(tab, 5));
}

int find_max(int tab[], int rozmiar)
{
    // initializacja zmiennych
    int max, i;
    max = tab[0];

    // wyznaczenie wartosci maksymalnej
    for (i=0; i < rozmiar; i++)
    {
        if (tab[i] > max)
            max = tab[i];
    }

    return max;
}
